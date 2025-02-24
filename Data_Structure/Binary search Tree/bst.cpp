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

int main(){

    Node * root = input_tree();
    // levelorder(root);
    if(search(root,13))
        cout << "Foound" << endl;
    else 
        cout << "Not Found" << endl;

    return 0;

}