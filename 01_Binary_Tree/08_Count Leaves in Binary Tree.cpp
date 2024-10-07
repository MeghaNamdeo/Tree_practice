int countLeaves(Node* root) {
   //base case
    if(root==NULL)return 0;;
    
    //left node
    if(!root->left && !root->right) return 1;
    
    //recursive  call
    return countLeaves(root->left)+ countLeaves(root->right);
    
    
}//TC and SC:O(n)

//Method 2 : Traversal
 void countLeaves2(Node* root, int &c) {
   //base case
    if(root==NULL)return ;
    
    //left node
    if(!root->left && !root->right) {
        c++;
        return;
    }    
    //recursive  call
    countLeaves2(root->left,c);
    countLeaves2(root->right,c);
    
    
}
int countLeaves(Node* root) {
    int c=0; 

    countLeaves2(root,c);
    
    return c;
    
    
}//TC and SC:O(n)