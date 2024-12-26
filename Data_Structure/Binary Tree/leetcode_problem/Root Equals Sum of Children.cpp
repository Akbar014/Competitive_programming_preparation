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


// question .....................
// https://leetcode.com/problems/root-equals-sum-of-children/description/

// You are given the root of a binary tree that consists of exactly 3 nodes: the root, its left child, and its right child.

// Return true if the value of the root is equal to the sum of the values of its two children, or false otherwise.


class Solution {
public:
    bool checkTree(TreeNode* root) {
        int left_val = root->left->val;
        int right_val = root->right->val;
        // if(left_val + right_val == root->val){
        //     return true;
        // }else return false;
        return left_val + right_val == root->val;
    }
};