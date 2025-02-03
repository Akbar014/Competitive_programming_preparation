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
    void travelTree(TreeNode* root, long &prev, long &mini){
        if (root== NULL){
            return ;
        }
        travelTree(root->left, prev, mini);

        if(prev != -1){
            mini = min(mini, (root->val - prev));
        }
        prev = root->val;

        travelTree(root->right, prev, mini);
    }
    int getMinimumDifference(TreeNode* root) {
        long mini = INT_MAX;
        long prev = -1;
        travelTree(root, prev,mini);
        return mini;
    }
};