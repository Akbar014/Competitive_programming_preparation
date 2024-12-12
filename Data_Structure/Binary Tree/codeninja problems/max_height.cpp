/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int getHeight(TreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    int left_height =getHeight(root->left);
    int right_height =getHeight(root->right);
    return max(left_height,right_height) + 1;
}
int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    int height = getHeight(root);
    return height;
}
