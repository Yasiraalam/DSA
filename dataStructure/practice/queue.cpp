#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define size 100
class Queue
{
    int *arr;
    int qfront;
    int rear;
    public:
 Queue()
 {
     arr =new int[size];
    qfront=0;
    rear=0;
 }
  void enque(int data)
  {
    if(rear==size)
    {
        cout<<"Que is full"<<endl;

    }
    else{
        arr[rear]=data;
        rear++;
    }
  }
  int deque()
  {
    if(qfront==rear)
    {
        cout<<"que is empty"<<endl;
    }
    else{
        int ans =arr[qfront];
        arr[qfront]=-1;
        qfront++;
        if(qfront==rear)
        {
            qfront=0;
            rear=0;
        }
        return ans;
    }
  }
  int front()
  {
    if(qfront==rear)
    {
        return -1;
    }
    else{
        return arr[qfront];
    }
  }
  bool isempty()
  {
    if(qfront==rear)
    {
        return true;
    }
    else{
        return false;
    }
  }
  void print()
  {

    while (rear <size)
    {
        cout<<qfront<<" ";
        rear++;
    }
    
  }
};

int main()
{

Queue q;
q.enque(1);
q.enque(2);
q.enque(3);
q.enque(4);
q.deque();
q.deque();
cout<<"front: "<<q.front()<<endl;
cout<<"isEmpty: "<<q.isempty()<<endl;
q.print();
return 0;
}