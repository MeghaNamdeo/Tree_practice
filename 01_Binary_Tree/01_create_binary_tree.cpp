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