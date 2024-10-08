class Solution
{
    public:
        Node* insert(Node* node, int data) {
        
           if(!node)
           {
               Node* temp = new Node(data);
               return temp;
           }
           
           if(node->data>data)
           {
               node->left=insert(node->left,data);
           }
           else if(node->data<data)
           {
            
               node->right=insert(node->right,data);
           
           }
           //if duplicate exist do nothing 
           return node;
           
           
    }

};//TC:O(h) ,worst case TC:O(n)
//SC:O(n)

