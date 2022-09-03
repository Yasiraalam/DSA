#include<bits/stdc++.h>
using namespace std;


int main()
{
int n;
cout<<"Enter dec: ";
cin>>n;
int bit;
int ans=0,i=0;
while (n!=0)
{
     bit =n & 1;   //checking odd even
    ans =pow(10,i)*bit +ans;
    n=n>>1;   //one right shift
    i++;
}
cout<<ans;



return 0;
}