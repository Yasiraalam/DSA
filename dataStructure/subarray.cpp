#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    // int maxsum=0;
    // // int curr[n+1];
    // // curr[0]=0;
    // for (int i = 0; i < n; i++)
    // { int sum=0;
    //     for (int j = i; j < n; j++)
    //     {
    //          sum+=a[j];
          
    //         maxsum = max(maxsum,sum);
    //     }
        
        
    // }
    // cout<<maxsum<<endl;
    int best=0,sum=0;
    for (int i = 0; i < n; i++)
    {
        sum = max(a[i],sum+a[i]);
        best= max(best,sum);
    }
    cout<<best<<endl;
    
    


return 0;
}