//sir code + apna collge (yt)
#include <bits/stdc++.h>
using namespace std; 
int tower (int i , char src, char helper , char dest)
{
    if (i == 1)
    {  
        cout <<"disk"<<i<<"form: " <<src<<"->"<<dest<<endl; 
    }
    else 
    {
        tower(i -1, src, helper, dest);
       cout<<"disk" << i << "form: " << src<< "->"<<dest<<endl; 
       tower(i-1, helper, src, dest);
    }

}
int main ()
{
    int i; 
    char t1, t2, t3; 
    cout <<"enter the no of the rings "<<endl ;
    cin >> i; 
    tower(i, 'A', 'B', 'C');

}