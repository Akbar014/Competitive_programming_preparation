#include<bits/stdc++.h>
using namespace std;

// node->left < node;
// node->right > node;


class Node{
    public:
        int val;
        Node *left;
        Node *right;
        Node (int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* input_tree() {

    int val;
    cin >> val;
    Node* root;
    if(val != -1)
        root = new Node(val);
    else
        root = NULL;

    queue <Node*> q;
    if(root) q.push(root);


    while(!q.empty()){
        Node* fr = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;

        Node* leftNode;
        Node* rightNode;

        if(l != -1) leftNode = new Node(l);
        else leftNode = NULL;

        if (r != -1) rightNode = new Node (r);
        else rightNode = NULL;

        fr->left = leftNode;
        fr->right = rightNode;

        if(fr->left) q.push(fr->left);
        if(fr->right) q.push(fr->right);
    }

    return root;

}

void levelorder(Node* root){
    queue<Node* >q;
    q.push(root);
    while(!q.empty()){
        Node* fr = q.front();
        q.pop();

        cout << fr->val << endl;

        if(fr->left) q.push(fr->left);
        if(fr->right) q.push(fr->right);

    }
}

bool search(Node* root, int x){
    if(root==NULL)
        return false;
    if(root->val==x)
        return true;
    if(x < root->val)
        return search(root->left, x);
    else 
        return search(root->right, x);
    
    
}
Node* convert(int a[], int n, int l, int r){
    if(l > r) return NULL;
    int mid = (l+r)/2;
    Node * root = new Node (a[mid]);
    Node * leftNode = convert(a, n, l,mid-1);
    Node * rightNode = convert(a, n, mid+1,r);
    root->left = leftNode;
    root->right = rightNode;
    return root;
}
void insert(Node* &root, int val){
    Node* newNode = new Node(val);
    if(root==NULL){
        root = newNode;
        return;
    }
        
    if(val < root->val)
        if(root->left==NULL)
            root->left = newNode;
        else
            insert(root->left,val);

    else
        if(root->right==NULL)
            root->right = newNode;
        else
            insert(root->right, val);

}

int main(){

    // Node * root = input_tree();
    
    // insert(root,16);

    

    int n;
    cin >> n;
    int ar[n];

    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    
    Node * root = convert(ar,n,0,n-1);

    levelorder(root);
    
    return 0;

}