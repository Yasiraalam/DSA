#include<bits/stdc++.h>
using namespace std;
int DecimalToHExa(int num)
{
    if(num == 0)
        return 0;
    DecimalToHExa(num / 16);
    int Hex = (num % 16);
    if(num > 9)
        cout<<(Hex+55);
    else
        cout<<Hex;

    return 0;
}

int main()
{
    int num;

    cout<<"Enter the simple Number : ";
    cin>>num;

    cout<<"After Converting"<< num <<" to Hexadecimal"<<endl;
    DecimalToHExa(num);
}
