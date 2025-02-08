/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left, *right;
        TreeNode() : val(0), left(NULL), right(NULL) {}
        TreeNode(T x) : val(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : val(x), left(left), right(right) {}
    };
 

************************************************************/

TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
    TreeNode<int>* newNode = new TreeNode (val);
    if(root==NULL){
        root = newNode;
        return root;
    }
    if(root->val > val){
        if(root->left == NULL){
            root->left = newNode;
        }else{
            insertionInBST(root->left,val);
        }
    }else{
        if(root->right == NULL){
            root->right = newNode;
        }else{
            insertionInBST(root->right, val);
        }
    }

    return root;

}