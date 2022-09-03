#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* prev;
    node* next;
    node(int d)
    {
        this->data= d;
        this->next=NULL;
    }
};
void insertAthead(node* &head, int d){
    
    node* temp=new node(d);
    if(head==NULL)
    {
        head=temp; return;
    }
    temp->next=head;
    head->prev=temp;
    head=temp;
     
}

void insertAttail(node* &tail, int d){
    node* temp= new node(d);
    node *trav=tail;
    while (trav->next!=NULL)
    {
        trav= trav->next;
    }
    
    tail->next=temp;
    temp->prev=tail;
    tail=temp;

    
}
void insertAtposition(node* &tail,node* &head, int position,int d)
{
    //insert at start
      if(position==1)
      {
        insertAthead(head,d);  return;
      }
  // 
      node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at last position
    if (tail->next == NULL)
    {
        insertAttail(tail, d);
        return;
    }
    
    // creating a node for d;
    node *node2insert = new node(d);
    node2insert->next = temp->next;
    temp->next->prev=node2insert;
    temp->next = node2insert;
    node2insert->prev=temp;
}
void print(node* &head){
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
    node* node1=new node(10);
    node* head= NULL;
    node* tail=NULL;
    int size,ele,position;

    cout<<"number of nodes:";
     cin>>size;
     for (int i = 0; i < size; i++)
      {
        cout<<"Element: ";
        cin>>ele;
         insertAthead(head, ele);
    }

    print(head);   
        cout<<"Element insert at tail: ";
        cin>>ele;
        insertAttail(tail, ele);
    print(head); 
        cout<<"position: ";
        cin>>position;
    insertAtposition(tail,head,position,20);  
    print(head); 
            
        
    
    
    
    


return 0;
}