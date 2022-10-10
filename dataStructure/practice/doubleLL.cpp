#include<bits/stdc++.h>
#define ll long long
using namespace std;

class node
{
    public:
    int data;
    node* prev;
    node* next;
    node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

};
void print(node* &head)
{
    node* trav=head;
    while (trav!=NULL)
    {
        cout<<trav->data<<" ";
        trav=trav->next;

    }
    cout<<endl;

}
int getlength(node* &head)
{
    node* trav=head;
    int len =0;
    while (trav!=NULL)
    {
        len++;
        trav=trav->next;

    }
    return len;
}
void insertAtHead(node* &tail,node* &head,int d)
{
    //empty
    if(head==NULL)
    {
        node* temp=new node(d);
        head =temp;
        tail=temp;
    }
    else{
            node* temp=new node(d);
            temp->next=head;
            head->prev=temp;
            head=temp;
    }
    
}
void insertAtTail(node* &tail,node* &head,int d)
{
    //empty
    if(tail==NULL)
    {
        node* temp=new node(d);
        tail =temp;
        head=temp;
    }
    else{
            node* temp =new node(d);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
    }
   
}
void NodePosition(node* & tail,node* &head, int pos, int d)
{
      node* temp =new node(d);
      if(pos==1)
      {
        insertAtHead(tail,head,d);
        return;
      }
      node* trav=head;
      int cnt=1;
      while (cnt <pos-1)
      {
         trav=trav->next;
         cnt++;
      }
      if(trav->next==NULL)
      {
        insertAtTail(tail,head,d);
        return;
      }
      temp->next=trav->next;
      temp->next->prev=temp;
      trav->next=temp;
      temp->prev=trav;
      
}
int main()
{
 
 node* head=NULL;
  node* tail=NULL;
//  insertAtHead(tail,head,12);
//  insertAtHead(tail,head,44);
//  insertAtHead(tail,head,55);
//  insertAtHead(tail,head,80);
//  print(head);
 insertAtTail(tail,head,10);
 insertAtTail(tail,head,12);
 insertAtTail(tail,head,13);
 insertAtTail(tail,head,14);
 print(head);
cout<<"Length: "<<getlength(head)<<endl;
int pos;
cout<<"position where to insert: "<<endl;
cin>>pos;
NodePosition(tail,head,pos,99);
print(head);
return 0;
}