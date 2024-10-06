class Solution {
  public:
    void InOrder(Node* root)
    {
        if(root==NULL)return;
        
        InOrder(root->left);
        cout<<root->data<<" ";
        InOrder(root->right);
        
    }
    vector<int> inOrder(Node* root) {
      vector<int>ans;
      InOrder(root);
      return ans;
    }
};
TC:O(n)
SC:O(h)
worst SC:O(n)