#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
// class node
// {
//     public:
//     int data;
//     node* next;
//     node(int d)
//     {
//         this->data=d;
//         this->next=NULL;

//     }
//     ~node()
//     {
//         int val=this->data;
//         if(this->next!=NULL)
//         {
//             delete next;
//             this->next=NULL;
//         }
//         cout<<"memory free for node "<<val<<endl;
//     }
// };
struct node
{
    int data;
    node* next;
};
node* top=NULL;
bool isempty(){
    if(top==NULL)
        return true;
    else
        return false;
    
}
void push(int value){
    node* ptr=new node();
    ptr->data=value;
    ptr->next=top;
    top=ptr;
}
void pop()
{
    if(isempty())
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        node* ptr=top;
        top=ptr->next;
        delete ptr;
    }
}
void shoew_top()
{
    if(isempty())
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"Element at top is: "<<top->data<<endl;
    }
}


void pop_element(node* top)
{
   
        top=top->next;
        delete top;
    
}
void print(node* top)
{
    node* ptr=top;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    

}
int main()
{
push(1);
push(2);
push(3);
push(4);
pop();
shoew_top();
return 0;
}