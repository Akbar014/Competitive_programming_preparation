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

// https://leetcode.com/problems/univalued-binary-tree/
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        TreeNode* tmp = root;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* fr = q.front();
            q.pop();
            if(fr->val!=root->val){
                return false;
            }else{
                if(fr->left) q.push(fr->left);
                if(fr->right) q.push(fr->right);
            }
        }

        return true;
         
    }
};