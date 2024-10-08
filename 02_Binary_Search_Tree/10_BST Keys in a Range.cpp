//using inorder then print
class Solution {
  public:
  void inorder(Node* root, vector<int>&in)
  {
      if(root==NULL)return;
      
      inorder(root->left,in);
      in.push_back(root->data);
      inorder(root->right,in);
      
      
  }
    vector<int> printNearNodes(Node *root, int low, int high) {
        vector<int>in;
        
        inorder(root,in);
        vector<int>ans;
        
        for(int i=0;i<in.size();i++)
        {
            if(in[i]>=low&&in[i]<=high)
            ans.push_back(in[i]);
            
        }
        return ans;
        
    }
    
};//TC:O(n), SC:O(n)
int n1,n2;
class Solution {
  public:
  void find(Node* root,vector<int>&ans)
  {
      if(root==NULL)return ;
       
       if(root->data > n1  && root->data >n2)
       {
          find(root->left,ans); 
       }
       else if(root->data < n1  && root->data < n2)
       {
          find(root->right,ans); 
       }
       else
       {
          find(root->left,ans); 
          ans.push_back(root->data);
          find(root->right,ans); 
       }
      
  }
    vector<int> printNearNodes(Node *root, int low, int high) {
        vector<int>ans;
        n1=low,n2=high;
        find(root,ans);
        return ans;
       
    }
};//TC and SC:O(n)