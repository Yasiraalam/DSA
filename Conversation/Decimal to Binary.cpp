#include <iostream>
using namespace std;

void Decimal(int num)
{
    if(num==0) 
       cout<< "0";
    else if(num==1)
       cout<< "1";
    else
    {
        Decimal(num/2);
        cout << (num%2);
       //return num%2+10*(Decimal(x/2));
    }
}
int main() {
    int num;
    cout << "Enter the Number ";
    cin >> num;
    Decimal(num);

    return 0;
}
