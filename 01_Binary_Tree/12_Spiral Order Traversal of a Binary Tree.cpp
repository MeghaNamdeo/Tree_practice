//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    vector<int>ans;
    
    if (root == NULL) return ans;
    //create stack : right to left 
    stack<Node*>s1;
    
    //create stack : left to right 
    stack<Node*>s2;
    
    s1.push(root);
    
    
    while(!s1.empty()||!s2.empty())
    {
        if(!s1.empty())
        {
            while(!s1.empty())
            {
            Node* temp= s1.top();
            s1.pop();
            ans.push_back(temp->data);
            //first right child
            if(temp->right)s2.push(temp->right);
            //second right child
            if(temp->left)s2.push(temp->left);
            }
        }
        else 
        {
            while(!s2.empty())
            {
            Node* temp= s2.top();
            s2.pop();
            ans.push_back(temp->data);
            
            //first left  child
            if(temp->left)s1.push(temp->left);
            //second right child
            if(temp->right)s1.push(temp->right);
            }
        
        }
    }
     return ans;
}//TC and SC:O(n)
