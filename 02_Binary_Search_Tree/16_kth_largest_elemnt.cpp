class Solution
{
    public:
    void inorder(Node* root, vector<int>& ans) {
        if (root == NULL)
            return;
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    int kthLargest(Node *root, int K)
    {
    vector<int>ans;
    inorder(root,ans);
    return ans[ans.size()-K];
    }
};//TCandSC:O(n)

void inorder(TreeNode<int>* root, vector<int>& ans) {
        if (root == NULL)
            return;
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
}
    //TCandSC:O(n)
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    vector<int>ans;
    inorder(root,ans);
    if (k < 1 || k > ans.size()) {
        return -1; 
    }
    return ans[ans.size()-k];
}
