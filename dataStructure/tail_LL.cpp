#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val){         //constrctor
        data = val;   //getting the data
        next =NULL;
    }
};
void insertAtTail(node* &head,int val )
{
    //create a new node 
    node* n =new node(val);
    if(head==NULL){
        head=n; return;
    }
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;

    }
   temp->next =n;


}

void print(node* head)
{
    //ek aur temp node banayain gai jo point krega fir usko agai badayain gai
    node* temp=head;  //head ko point kr rha hai
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
       temp=temp->next;

    }
    cout<<endl;
    
}

int main()
{
    int size,element;

  node* head =NULL;
  node* tail=NULL;
  print(head);
  cout<<"size: ";
  cin>>size;
  for (int i = 0; i < size; i++)
  {
    cout<<"Element: ";
    cin>>element;
    insertAtTail(head,element);
  }
    
  print(head);
return 0;
}