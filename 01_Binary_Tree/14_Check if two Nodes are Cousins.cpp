//cousin = 1.same level 2.different parent
bool parent(Node *root, int &a, int &b)
{
    if(root==NULL)return false;
    if(root->left && root->right)
    {
        if((root->left->data==a && root->right->data == b)||
        (root->left->data==b && root->right->data == a))return true;
    }

    return parent(root->left,a,b)||parent(root->right,a,b);
}
// Returns true if the nodes with values 'a' and 'b' are cousins. Else returns false
bool isCousins(Node *root, int a, int b) {
    if(root==NULL)return false;
     queue<Node*>q;
     q.push(root);
     int l1 = -1,l2=-1;
     int level =0;
     
     while(!q.empty())
     {
         int n = q.size();
         while(n--)
         {
             Node* temp=q.front();
             
             q.pop();
             
             if(temp->data==a)l1=level;
             if(temp->data==b)l2=level;
             
             //left child
             if(temp->left)q.push(temp->left);
             
             //right child
             if(temp->right)q.push(temp->right);
         }
             level++;
             //both level different
             if(l1!=l2)return 0;
             //level same hai
             if(l1!=-1&&l2!=-1)break;
    }
         
     
     return(!parent(root,a,b));
}//TC:O(n),SC:O(n)
