// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       vector<int>ans;
       //base case
       if(root==NULL)return ans;
       
       //create queue
       queue<Node*>q;
       
       q.push(root);
       
       while(!q.empty())
       {
           int n = q.size();
           ans.push_back(q.front()->data);
     
           while(n--)
           {
               Node* temp = q.front();
               q.pop();
               
               if(temp->right)
               {
                   q.push(temp->right);
               }
               if(temp->left)
               {
                   q.push(temp->left);
               }
               
               
           }
       }return ans;
       
    }
};//TC:O(n)
//SC:O(n)


// Method 2:Recursion
class Solution
{
    public:
    //using recursion
    void RView(Node* root , int level , vector<int>&ans)
    {
        if(root==NULL)return ;
        
        if(level==ans.size())ans.push_back(root->data);
        
        RView(root->right,level+1,ans);
        RView(root->left,level+1,ans);
    }
    vector<int> rightView(Node *root)
    {
       vector<int>ans;
       //base case
       RView(root,0,ans);
       return ans;
       
    }
};//TC:O(n)
//SC:O(n)
