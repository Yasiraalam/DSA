#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    solve(n-1);
    cout<<n<<" ";
    

}

int main()
{

int n;
cout<<"Enter number: ";
cin>>n;
solve(n);

return 0;
}