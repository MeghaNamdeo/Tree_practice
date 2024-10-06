void Preorder(Node* root)

{
  if(root==NULL)return ;
  
  cout<<root->data<<" ";
  
  Preorder(root->left);
  
  Preorder(root->right);
  
}
vector <int> preorder(Node* root)
{
  vector<int>ans;
  Preorder(root);
  return ans ;
}
TC:O(n)
SC:O(h)
worst SC:O(n)