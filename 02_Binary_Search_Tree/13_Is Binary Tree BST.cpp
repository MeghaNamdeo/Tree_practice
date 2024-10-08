class Solution {
  public:
    //using inorder : if inorder is sorted then binary tree 
    //is binary serach tree
    
    void inorder(Node* root,vector<int>&ans)
    {
        if(root == NULL)return ;
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    bool isBST(Node* root) {
        vector<int>ans;
        inorder(root,ans);
        
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]>=ans[i+1])
            {
              return false;  
            }
        }
       return true;
    }
};//TC and SC:O(n)

