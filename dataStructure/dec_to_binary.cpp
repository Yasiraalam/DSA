#include<bits/stdc++.h>
using namespace std;


int main()
{
int n;
cout<<"Enter decimal number:";
cin>>n;

int rem;
int arr[32];    //number of bits atleast 10
int i=0;
while (n!=0)
{
     rem= n%2;
     n =n/2;
    arr[i]= rem;
     i++;
}
cout<<"Binary: ";
for (int j = i-1; j>=0; j--)
{
    cout<<arr[j];
}



return 0;
}