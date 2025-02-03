/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode * root, TreeNode* &current){
        if(root == NULL){
            return;
        }
        inorder(root->left, current);
        current->right = root;
        root->left = NULL;
        current = root;
        inorder(root->right, current);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* newNode = new TreeNode(0);
        TreeNode * current = newNode;
        inorder(root, current);
        return newNode->right;
    }
};