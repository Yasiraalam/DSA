#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define max 100

int main()
{
int arr[max];
int n,ele,item,pos;
cout<<"n: ";
cin>>n;
for (int i = 0; i < n; i++)
{   
    cout<<"Elemet ";
    cin>>arr[i];
}
cout<<"Enter the element to insert: "<<endl;
cin>>item;
cout<<"Enter  position: "<<endl;
cin>>pos;

for (int i = n-1; i>=pos-1; i--)
{
    arr[i+1]=arr[i];
}
arr[pos-1]=item;
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


return 0;
}