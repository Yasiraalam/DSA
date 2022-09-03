#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;


    node(int val)
     {
        data=val;
        next=NULL;
     }
};
void insertnode(node* &head, int val)
{
    node* n =new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp =head;
    while (temp->next!=NULL)    
    {
        temp=temp->next;
    }
    temp->next=n;
    

}
void print(node* head)
{
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}

int main()
{ 
 
  
    node* head=NULL; 
    int n;
    cout<<"how many node you want to insert:";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cout<<"Element: ";
        cin>>ele;
     insertnode(head,ele);
        
    }
    
   
   print(head);
   
    


return 0;
}