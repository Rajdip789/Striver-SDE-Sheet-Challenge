/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void preorder(vector<int> &ans, TreeNode *root) {
    ans.push_back(root -> data);
    if(root -> left) preorder(ans, root ->left);
    if(root -> right) preorder(ans, root ->right);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    if(!root) return ans;
    preorder(ans, root);
    return ans;
}
