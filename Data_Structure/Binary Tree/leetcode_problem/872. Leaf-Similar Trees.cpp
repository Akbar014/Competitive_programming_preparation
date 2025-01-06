   
  
// https://leetcode.com/problems/leaf-similar-trees/description/
  

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
    
    void collectLeafNode(TreeNode*root, vector<int>&v){
        if(root==NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            v.push_back(root->val);
        }else{
            collectLeafNode(root->left, v);
            collectLeafNode(root->right, v);
        }
    }
    vector<int> leafNode(TreeNode* root){
        vector<int>v;
        collectLeafNode(root, v);
        return v;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leafNode1 = leafNode(root1);
        vector<int>leafNode2 = leafNode(root2);

        return leafNode1==leafNode2;

    }
};

//......................................... another solution ..................................... 

vector<int>myVector(TreeNode* root, vector<int>&v){
if(!root)
        return v;
    if(!root->left  && !root->right)
        v.push_back(root->val);
    myVector(root->left,v);
    myVector(root->right,v);
    return v;
}
bool leafSimilar(TreeNode* root1, TreeNode* root2) {
    vector<int>v1;
    vector<int>v2;
return  myVector(root1, v1) == myVector(root2,v2) ;
}