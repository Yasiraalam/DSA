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
void insertAtTail(node* &tail,int d)
{
    node*node1=new node(d);
    if(tail==NULL)   //if only one node is present 
    {
        tail=node1;
        return;
    }
    node* temp=tail;
    while (temp->next!=NULL)  //travering the node ultil NUll is found then link a new node       
    {
        temp=temp->next;

    }
    temp->next=node1;

}
void print(node* &tail){
    node* trav=tail;
    while(trav!=NULL){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
    cout<<endl;
}

int main()
{
node*head=NULL;
node*tail=NULL;
int size;
cout<<"size: ";
cin>>size;
for (int i = 0; i < size; i++)
{
    int ele;
    cout<<"Element:";
    cin>>ele;
 insertAtTail(tail,ele);

}

print(tail);



return 0;
}