void inorder(Node* root, vector<int>& ans) {
        if (root == NULL)
            return;
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }

int sum(Node* root, int k) 
{ 
    vector<int>ans;
    inorder(root,ans);
    
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum=sum+ans[i];
    }
    return sum;
    
    
} //TC:O(n),SC:O(n)