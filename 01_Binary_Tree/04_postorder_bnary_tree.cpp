void PostOrder(Node* root)
{
  if(root==NULL)return;
  
  PostOrder(root->left);
  PostOrder(root->right);
  cout<<root->data<<" ";
  
}
vector <int> postOrder(Node* root)
{
  vector<int>ans;
  PostOrder(root);
  return ans;
}
TC:O(n)
SC:O(h)
worst SC:O(n)