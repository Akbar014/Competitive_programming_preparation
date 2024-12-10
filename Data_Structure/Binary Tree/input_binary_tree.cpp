#include<bits/stdc++.h>
using namespace std;
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

Node* input_tree(){
    int val;
    cin >> val;
    Node* root;
    if(val==-1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        // ber kore anlam
        Node* p = q.front();
        q.pop();

        // ja kaj korbo
        int l,r;
        cin >> l >> r;
        Node* left;
        Node* right;
        if(l==-1) left = NULL;
        else left = new Node(l);

        if(r==-1) right = NULL;
        else right = new Node(r);

        p->left = left;
        p->right = right; 


        // children queue te push korbo
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

       
    }
    
    return root;

}

void levelorder(Node * root){
    if(root == NULL) {
        cout << "Root nai" << endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){

        // ber kore anlam
        Node * f = q.front();
        q.pop();

        // ja kaj korar korlam 
        cout << f->val << " ";

        // Line a children gulo k rakha
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

    }
}
int main(){

    Node* root = input_tree();
    levelorder(root);

    return 0;
}