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
    vector<int>v;
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL){
            return false;
        }
        int diff = k - root->val;
        if(find(v.begin(), v.end(), diff) != v.end()){
            return true;
        }

        v.push_back(root->val);

        return findTarget(root->left, k) || findTarget(root->right, k);
        
    }
};