class Solution {
public:
    int countLeaves(Node* root) {
        if (root == NULL) return 0;
        if (!root->left && !root->right) return 1;
        return countLeaves(root->left) + countLeaves(root->right);
    }

    int countNodes(Node* root) {
        if (root == NULL) return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }

    int countNonLeafNodes(Node* root) {
        int leafCount = countLeaves(root);
        int totalCount = countNodes(root);
        return totalCount - leafCount;
    }
};
//Tc and sc:O(n)


class Solution {
  public:
    
    int countNonLeafNodes(Node* root) {
        //base case 
        if(root == NULL)return 0;
        
        //leaf node 
        if(!root -> left && !root -> right) return 0;
        
        return 1 + countNonLeafNodes(root->left)+countNonLeafNodes(root->right);
    }
};//TC:O(n), SC:O(n)
