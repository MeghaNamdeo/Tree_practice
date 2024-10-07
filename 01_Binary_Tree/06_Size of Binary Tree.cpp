//Method 1 : using Traversal : preorder find size of Binary Tree 

class Solution {
  public:
   void countNode(Node* root, int &count)
   {
       //base case
       if( root == NULL )return ;
       
       count++;
       countNode(root->left,count);
       countNode(root->right,count);
       
   }
    
    int getSize(Node* node) {
        
        int count=0;
       
        
        countNode(node,count);
        
        
        return count;
    }
};
//TC:O(n)
//Sc:O(n)

//Method 2: Recursion
class Solution {
  public:
    int getSize(Node* node) {
        // base case
        if(node==NULL)return 0;
        
        return 1 + getSize(node->left) + getSize(node->right);
    }
};//TC and SC:O(n)