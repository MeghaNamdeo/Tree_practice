vector<int> leftView(Node *root)
{   vector<int>ans;     
    if(root==NULL)return ans;
    //create queue
    queue<Node* >q;
    q.push(root);
    
    

    
    while(!q.empty())
    {
        int n = q.size();
        ans.push_back(q.front()->data);
        while(n--)
        {
            Node* temp=q.front();
            q.pop();
            if(temp->left)
            {
               q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }return ans;
   
}
//TC:O(n),SC:O(n)

//Method 2:Recursion
void leftView1(Node *root,vector<int>&ans,int level)
{
   
   if(root==NULL)return ;
   
   if(level==ans.size())ans.push_back(root->data);
   
   //left
   leftView1(root->left,ans,level+1);
   
   //right
   leftView1(root->right,ans,level+1);
}
vector<int> leftView(Node *root)
{
   vector<int>ans;
  leftView1(root,ans,0);
  return ans;
}