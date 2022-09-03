#include <iostream>
using namespace std;

int Hexa_(int n)
{
    if(n == 0)
         return 0;
    Hexa_(n/16);
    int R = (n%16);
    if(n > 9)
       cout << char(R +55);
    else
       cout << R;
       
    return 0;
}

int main() {
    int n;
    cout << "Enter ";
    cin >> n;
    Hexa_(n);

    return 0;
}