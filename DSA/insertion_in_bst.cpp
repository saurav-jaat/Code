#include<bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node* left;
    node* right;
    node(int data)
    {
        key=data;
        right=NULL;
        left=NULL;
    }
};


node* createbst(node* root,int value){
               
    if(root==NULL){
        root=new node(value);
        return root;
    }
    if(root!=NULL && value<root->key){
        root->left=createbst(root->left,value);
    }
    else{
      root->right=createbst(root->right,value);
    }

    return root;


}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    else{
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

main()
{
    
    node* root=NULL;
    
    root=createbst(root,50);
    root=createbst(root,30);
    root=createbst(root,20);
    root=createbst(root,40);
    root=createbst(root,70);
    root=createbst(root,60);
    root=createbst(root,80);

    inorder(root);
  
}