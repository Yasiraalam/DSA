#include <bits/stdc++.h>
using namespace std;
int Convert(int num, int base)
{
    if(num == 0) return 0;

    Convert(num / base, base);
    int R = (num % base);
    if(base == 16 && R > 9)
        cout<<(R+55);
    else
        cout<<R;
}
int main()
{
    int num, base;
    cout<<"Enter the Number : ";
    cin>>num;

    cout<<"Enter Base : ";
    cin>>base;

    cout<<"Converting "<<num <<" with base "<<base<<endl;
    Convert(num, base);
}
