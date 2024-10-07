//Method 1  : recursion
long int sumBT(Node* root)
{
    //base case
   if(root==NULL)return 0;
   
   
   return root->key+   sumBT(root->left)+   sumBT(root->right);
   
   
}
//TC:O(n), SC:O(n)

//Method  2 : Traversal
void sum_BT(Node* root,int &sum)
{
    if(root==NULL)return ;
    
    sum=sum+root->key;
    sum_BT(root->left,sum);
    sum_BT(root->right,sum);
}
long int sumBT(Node* root)
{
  int sum=0;
  sum_BT(root,sum);
  return sum;
}
//TC:O(n), SC:O(n)