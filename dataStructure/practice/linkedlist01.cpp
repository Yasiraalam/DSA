#include<bits/stdc++.h>
#define ll long long
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    ~node()
    {
        int value =this->data;
        if(this->next!=NULL)
        {
            delete next;
            this ->next= NULL;

        }
        cout<<"memory free for node "<<value<<endl;
    }
};
void insertAtHead(node* &head,int d)
{
    node* temp= new node(d);
     temp->next = head;
     head =temp;
    
}
void insertAtTail(node* &head,int d)
{

   node* temp=new node(d);
   if(head==NULL)
   {
    head = temp; return;
   }
   node* trav=head;
   while (trav->next!=NULL)
   {
      trav=trav->next;
   }
   trav->next =temp;
   
   
}
void print(node* head)
{
    node*trav=head;
    while (trav!=NULL)
    {
       cout<<trav->data<<" ";
       trav=trav->next;
    }
    cout<<endl;
    
}
void position(node* &head,int pos,int d)
{
    node* temp =new node(d);
    if(pos==1)
    {
        insertAtHead(head,d);
        return;
    }
    node* trav= head;
    int cnt=1;
    while (cnt <pos-1)
    {
        trav= trav->next;
        cnt++;
    }
    if(trav->next==NULL)
    {
        insertAtTail(head,d);
        return;
    }
    temp->next=trav->next;
    trav->next=temp;

    
}
void deletenode(node* &head,int pos)
{
    //starting pos
    if(pos==1)
    {   
        node* temp=head;//storing the head node for delte
        head=head->next;
        temp->next=NULL;  //this was pointing toh linked list so first point to null then delte
        delete temp;
    }
    else{
        //deleting any middle node
        node*prev=NULL;
        node*curr =head;
        int cnt=1;
        while(cnt<pos)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
         }
        prev->next =curr->next;
        curr->next=NULL;
        delete curr;
    }
    
    
}
int main()
{
node* head=NULL;
node* tail=NULL;
// insertAtHead(head,2);
int n;
cout<<"enter number of nodes: "<<endl;
cin>>n;
for (int i = 0; i < n; i++)
{
    int d;
    cout<<"Data: ";
    cin>>d;
   insertAtTail(head,d);

}

// insertAtTail(head,10);
// insertAtTail(head,20);
// insertAtTail(head,30);
// insertAtTail(head,40);
print(head);
int pos;
cout<<"Enter position To Delete: "<<endl;
cin>>pos;
deletenode(head,pos);
print(head);
// position(head,3,22);




return 0;
}