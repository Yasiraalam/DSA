#include<bits/stdc++.h>
using namespace std;

int prime(int n,int i)
{
    if(i==1) return 1;
    if(i%2==0) return 0;
    return prime(n,i-1);
}
int main()
{
    int num;
    cout<<"enter no: ";
    cin>>num;
    int p=prime(num,num/2);
    if(p==1){
        cout<<num<<" is a prime number ";
    }
    else{
        cout<<num<<" is not prime";
    }


return 0;
}