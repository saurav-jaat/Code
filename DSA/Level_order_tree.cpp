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


int height(struct node* root)
{
    struct node* node= root;
    if(node==NULL)
    {
        return 0;
    }
    else{
        int lheight=height(node->left);
        int rheight=height(node->right);
        if(lheight>rheight)
         {return(lheight+1);}
    else
        {return(rheight+1);
        }
    }
    
}
void printgivenlevel(struct node* root, int level){

    if(root==NULL)
    {
        return;
    }
    if(level==1){
        cout<<root->data<<" ";
    }
    else if(level>1){
        printgivenlevel(root->left,level-1);
        printgivenlevel(root->right,level-1);
    }

}


void printlevelorder(struct node* root){
    int height_of_tree=height(root);
    
    for(int i=1;i<=height_of_tree;i++)
    {
        printgivenlevel(root,i);
    }

}



main()
{

    struct node* root= new node(1) ;
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right = new node(5); 
    root->right=new node(3);
    root->right->right=new node(7);
    root->right->left=new node(6);
   printlevelorder(root);
   return 0;


    
}
