//chess problem (vv important);

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x1,x2,y1,y2;
	    cin>>x1>>y1;
	    cin>>x2>>y2;
	    int dx[8]={2,2,-2,-2,1,1,-1,-1};
	    int dy[8]={1,-1,1,-1,2,-2,2,-2};
        vector<vector<int>> v1,v2;
        for (int i=0; i<8; i++)
        {
            int x=x1 +dx[i];
            int y=y1 +dy[i];
            if(x>=1 && x<=8 && y>=1 && y<=8 )
            {
                v1.push_back({x,y});
            }
            x = x2 + dx[i];
            y = y2 + dy[i];
             if(x>=1 && x<=8 && y>=1 && y<=8 )
            {
                v2.push_back({x,y});
            }
            
        }
        bool ok =false;
        for(auto& c1 : v1)
        {
            for (auto& c2 : v2) {
               if(c1==c2)
               {
                   ok=true;
                   
               }
            }
        }
        if(ok) 
        {
        cout<<"YES";
        }
        else{
            cout<<"NO";
            cout<<endl;
        }
        
	    
	}
	return 0;
}
