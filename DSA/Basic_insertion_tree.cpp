#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};


void inorder(struct node* temp)
{
    if(temp==NULL)
    {
        
        return;
    }
  inorder(temp->left);
  cout<<temp->data<<' ';
  inorder(temp->right);

}


node* InsertNode(struct node* root, int key){

    if(root==NULL)
    {
        root=new node(key);
    }

    queue<node*> q;

    q.push(root);

    while(!q.empty())
    {

        struct node* temp=q.front();
        q.pop();

        if(temp->left!=NULL)
        {
            q.push(temp->left);

        }
        else{
            temp->left=new node(key);
            return root;
            }       
        

        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        else{
            temp->right=new node(key);
            return root;

        }

    }

}
main()
{

    struct node* root= new node(10) ;
    root->left=new node(11);
    root->left->left=new node(7);
    root->right=new node(9);
    root->right->right=new node(15);
    root->right->left=new node(8);
    inorder(root);

    
    int key =12;
     
    root= InsertNode(root,key);
    cout<<"after insertion\n";
    inorder(root);
    return 0;


}