#include<bits/stdc++.h>
using namespace std;

int ispal(char arr[],int l,int r){
    if(l>=r)
    {
        return true;
    }
    if(arr[l]!=arr[r])
    {
        return false;
    }
    return ispal(arr,l+1,r-1);
}
int main()
{

char arr[7]="madamq";
cout<<ispal(arr,0,7);    //print 0 for not pal and 1 for pal

return 0;
}