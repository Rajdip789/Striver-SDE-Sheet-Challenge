/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void getView(TreeNode<int> *root, vector<int> &ds, int level) {
    if(!root) return;
    
    if(ds.size() == level) ds.push_back(root -> data);
    if(root -> left) getView(root -> left, ds, level + 1);
    if(root -> right) getView(root -> right, ds, level + 1);
}

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> ds;
    if(!root) return ds;
    
    //getView(root, ds, 0);
    queue<TreeNode<int>*> q;
    q.push(root);
    
    while(!q.empty()) {
        int size = q.size();
        
        for(int i = 0; i < size; i++) {
            TreeNode<int>* node = q.front();
            q.pop();
            
            if(i == 0) ds.push_back(node -> data);
            if(node -> left) q.push(node -> left);
            if(node -> right) q.push(node -> right);
        }
    }
    return ds;
}



