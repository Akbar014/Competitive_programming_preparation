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
    TreeNode* convert(vector<int>v, int n, int l, int r ){
        if(l>r){
            return NULL;
        }
        int mid = (l+r)/2;
        TreeNode* root = new TreeNode (v[mid]);
        TreeNode* leftRoot = convert(v, n, l, mid-1);
        TreeNode* rightRoot = convert(v, n, mid+1, r);

        root->left = leftRoot;
        root->right = rightRoot;

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        int n = nums.size();
        TreeNode* converted_root = convert(nums, n, l, r);
        return converted_root;

    }
};