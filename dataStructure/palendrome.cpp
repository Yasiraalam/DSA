#include<bits/stdc++.h>
using namespace std;


int main()
{
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  int rev=0;
  int n=num;
  while(num!=0){

     int digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
  }
  cout<<"The reverse of a number is"<<rev<<endl;
  if(n==rev)
  {
    cout<<"palindrome"<<endl;
  }
  else{
    cout<<"not palendrome";
  }

return 0;
}