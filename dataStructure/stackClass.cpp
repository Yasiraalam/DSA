#include <bits/stdc++.h>
#define ll long long
#define max 100
using namespace std;
int top = -1;
void push(int stack[],int item)
{
    if(top==max-1)
    {
        cout<<"over flow"<<endl;
    }

    else{
        top++;
        stack[top]=item;
    }
}
int pop(int stack[])
{
    if(top==-1)
    {
        return -1;
    }
    else{
        return stack[top--];
    }
}
void view(int stack[])
{
    if(top==-1)
    {
        cout<<"stack empty: ";
    }
    else{
       int i=0;
        while (i<top)
        {
            cout<<stack[i]<<" ";

        i++;
        }
        
    }
}
int main()
{
    int ch;
    int stack[max];
    while (1)
    {  int item;
        cout << "1 for push\n2 for pop\n3 for view" << endl;
        cout<<"Enter your choice:";
        cin >> ch;
        if (ch == 1)
        {
           
            cout << "enter the element for push:";
            cin >> item;
            push(stack,item);
        }
        if(ch==2)
        {
            item=pop(stack);
            if(item==-1)
            {
                cout<<"under flow";
            }
            else{
                cout<<"item "<<item;
            }
        }
        if(ch==3)
        {
            view(stack);
        }
        if(ch==4)
        {
         break;
        }
    }

    return 0;
}