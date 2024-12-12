#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/
// vector<int>v;
// void getLeftNodes(BinaryTreeNode<int> *root){
// 	if(root==NULL){
// 		return 0;
// 	}
// 	// int left_node = getLeftNodes(root->left);
// 	v.push(getLeftNodes(root->data));

// }
long long sum;
void getLeftSum(BinaryTreeNode<int> *root){
	if(root==NULL) return ;
	if(root->left) sum += root->left->data;
	getLeftSum(root->left);
	getLeftSum(root->right);
}
long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	sum = 0;
	getLeftSum(root);
	return sum;
}