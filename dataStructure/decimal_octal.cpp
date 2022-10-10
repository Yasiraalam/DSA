#include<bits/stdc++.h>
#define ll long long
using namespace std;

int DecimalToOctal(int n)
{
   static int sem=1,octal=0;
    if(n!=0)
    {
      octal=octal+(n%8)*sem;
      sem=sem*10;
      DecimalToOctal(n/8);
    }
   return octal;
}
int main()
{
int n;
cout<<"Enter decimal number: ";
cin>>n;
cout<<"in octal: "<<DecimalToOctal(n);

return 0;
}