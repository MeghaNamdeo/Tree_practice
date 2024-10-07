#include <bits/stdc++.h>
using namespace std;

class Node
{
    public :
    int data;
    Node* left, *right;
    
    Node(int value)
    {
        data=value;
        left=right = NULL;
        
    }
};
int main()
{
    int x;
    cout<<"enter root data :";
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node* root = new Node(x);
    q.push(root);
    
    //build binary  tree
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        
        //left node 
        //right node
        
        cout<<"Enter data left child of "<<temp->data <<" : ";
        cin>>first;
        if(first!=-1)
        {
            temp->left=new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter data right child of "<<temp->data<<" : ";
        cin>>second;
        if(second!=-1)
        {
            temp->right=new Node(second);
            q.push(temp->right);
        }
        
    }
    
    

    return 0;
}

----------------------------------
//another method 
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public :
    int data;
    Node* left, *right;
    
    Node(int value)
    {
        data=value;
        left=right = NULL;
        
    }
};
Node* Binary_Tree()
{
    int x;
    cin>>x;
    if(x==-1)return NULL;
    Node*temp = new Node(x);
    
    //left side creation
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left=Binary_Tree();
    
    //right side creation
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right=Binary_Tree();
    return temp;
    
}
int main()
{
    
    cout<<"enter root data :";
    Node* root;
    root=Binary_Tree();
    return 0;
} //TC:O(n)
//SC:O(h)
//worst case SC:O(n)


#include <bits/stdc++.h>
using namespace std;

class Node
{
    public :
    int data;
    Node* left, *right;
    
    Node(int value)
    {
        data=value;
        left=right = NULL;
        
    }
};
Node* Binary_Tree()
{
    int x;
    cin>>x;
    if(x==-1)return NULL;
    Node*temp = new Node(x);
    
    //left side creation
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left=Binary_Tree();
    
    //right side creation
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right=Binary_Tree();
    return temp;
    
}
void PreOrder(Node* root)
{
  if(root==NULL)return;
  
  cout<<root->data<<" ";
  PreOrder(root->left);
  PreOrder(root->right);
  
}
void InOrder(Node* root)
{
  if(root==NULL)return;
  
  InOrder(root->left);
  cout<<root->data<<" ";
  InOrder(root->right);
  
}
void PostOrder(Node* root)
{
  if(root==NULL)return;
  
  PostOrder(root->left);
  PostOrder(root->right);
  cout<<root->data<<" ";
  
}
int main()
{
    
    cout<<"enter root data :";
    Node* root;
    root=Binary_Tree();
    
    
    cout << " inorder traversal :" ;
    InOrder(root);
    
    cout << endl <<" Preorder traversal :" ;
    PreOrder(root);
    
    cout <<endl << " Postorder traversal :" ;
    PostOrder(root);
    return 0;
}//TC:O(n), SC:O(h), worst case SC:O(n)

/*output
Enter root data: 1
Enter the left child of 1: 2
Enter the left child of 2: 3
Enter the right child of 2: -1
Enter the right child of 1: 4
Enter the left child of 4: -1
Enter the right child of 4: -1


      1
     / \
    2   4
   /
  3

Inorder traversal: 3 2 1 4 
Preorder traversal: 1 2 3 4 
Postorder traversal: 3 2 4 1 

*/