#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    // Write your code here.
    if(!root) return true;
    queue<BinaryTreeNode<int>*>q;
    q.push(root);

    while(!q.empty()){
        BinaryTreeNode<int>* p = q.front();
        q.pop();

        if((p->left!=NULL && p->right==NULL) || (p->left==NULL && p->right!=NULL)){
            return false;
        }


        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        
    }

    return true;

}