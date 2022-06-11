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
void postorder(vector<int> &ans, TreeNode *root) {
    if(root -> left) postorder(ans, root ->left);
    if(root -> right) postorder(ans, root ->right);
    ans.push_back(root -> data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    if(!root) return ans;
    postorder(ans, root);
    return ans;
}
