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

    // int calculateRangeSum(TreeNode* root){
    //     if(root== NULL){
    //         return 0;
    //     }
    //     int calSum = calculateRangeSum(root->left) + calculateRangeSum(root-right)
    //     if(root->val )
    // }

    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root== NULL){
            return 0;
        }
        int calSum = rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);  
        
        if(root->val >= low && root->val <= high){
            return calSum + root->val;
        }else{
            return calSum;
        }
    }
};