#include<bits/stdc++.h>
using namespace std;
struct node
    {
        int data;
        struct node *next;
    };

struct node *start=NULL;

struct node *insert(struct node *)
    {
        int temp;
        cout<<"Enter data\n";
        cin>>temp;
        
        while(temp!=-1)
            {    struct node *new_node = new node;
                new_node->data=temp;

                if(start==NULL)
                            {   
                                start=new_node;
                                new_node->next=start;
                                
                            }
                else
                    {   new_node->data=temp;
                        struct node *ptr=start;
                        while(ptr->next!=start)
                            {
                                ptr=ptr->next;
                            }
                        ptr->next=new_node;
                        new_node->next=start;    
                    }
                 cout<<"Enter data\n";
                 cin>>temp;
                

            }
      
        return start;    
    }

struct node *display(struct node *start)
    {   
        struct node *ptr=start;
     
        while(ptr->next!=start)
            { 
                cout<<ptr->data<<"\t";
                ptr=ptr->next;
            }
         cout<<ptr->data<<"\t";
        return start;
    }

main()
    {
        start=insert(start);
        start=display(start);
     
    }
