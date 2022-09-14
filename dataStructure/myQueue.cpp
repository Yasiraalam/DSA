//youtube
#include<bits/stdc++.h>
using namespace std;
#define n 10
class queue
{
    int *arr;
    int front;
    int back;
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int item){
        if(back==n-1){
            cout<<"Queue overflow"<<endl;
        }
        arr++;
        arr[back]=item;
        if(front==-1){
            front++;
        }
    }
    void pop(){
      if(front==-1 || back>back){
        cout<<"underflow"<<endl; return;
      }

      front++;
    }
};

int main()
{
    queue l;
    l.push(29);
    


return 0;
}