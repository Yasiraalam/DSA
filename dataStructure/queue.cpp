#include<bits/stdc++.h>
using namespace std;
#define max 100
int queue[max];
int front=0;
int rear=-1; int item;
void enque(int item){
    if(rear<max)
    {
        queue[++rear]=item;

    }
    else{
        cout<<"Overflow";
    }
}
int deque(){
    if(front <=rear)
    {
        return queue[front++];
    }
    else{
        return -1;
    }
}
void view()
{
    if(front >rear){
        cout<<"empty";
    }
    else{
        for (int i = front; i <=rear; i++)
        {
            cout<<queue[i];
        }
        
    }
}
int main()
{
 int ch;
 while (1)
 {
    cout<<"1.for Enque /n 2.for deque/n 3 for view ";
    cin>>ch;
    if(ch==1)
    {   int item;
        cout<<"Enter element itme  to enque "<<endl;
        cin>>item;
        enque(item);
    }
    if(ch==2)
    {
        item=deque();
        if(item==-1)
        {
            cout<<"Underflow";
        }
        else{
            cout<<item;
        }
    }
    else if(ch==3)
    {
        view();
    }
    else{
        break;
    }
 }
 

return 0;
}