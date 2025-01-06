
// https://leetcode.com/problems/binary-tree-tilt/
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
    int tilt = 0;
    int tiltfind(TreeNode* root){
        if (root==NULL){
            return 0;
        }
        int l = tiltfind(root->left);
        int r = tiltfind(root->right);
        tilt += abs(l-r);
        return l+r+ root->val;
    }
    int findTilt(TreeNode* root) {
        tiltfind(root);
        return tilt;
    }
};