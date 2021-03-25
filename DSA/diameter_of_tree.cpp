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


int diameteroftree(struct node* root)
{
    struct node* node= root;
    if(node==NULL)
    {
        return 0;
    }
    else{
        int lheight=diameteroftree(node->left);
        int rheight=diameteroftree(node->right);
        return(lheight+rheight+1);
    }
}
    



main()
{

    struct node* root= new node(1) ;
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right = new node(5); 
    root->right=new node(3);
    root->right->right=new node(6);
    
   cout<<"Diameter of this tree is\t"<<diameteroftree(root)-1;
   return 0;


    
}
