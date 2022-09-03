#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i, j,n;
    cout<<"size ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cout<<"enter element: ";
       cin>>arr[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
        int j = i-1;   //scope k liya 
      for (; j>=0; j--)
        {
             if(arr[j]> temp)
             {
                arr[j+1] =arr[j];
             }
             else{
                break;
             }
        }
        arr[j+1]=temp;

    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    


return 0;
}