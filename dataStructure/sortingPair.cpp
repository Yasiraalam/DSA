#include<bits/stdc++.h>
using namespace std;


int main()
{

vector<pair<int,int>> v;
v.push_back({1,5});
v.push_back({2,3});
v.push_back({1,2});
sort(v.begin(),v.end());
for (int i = 0; i < v.size(); i++)
{
    cout<<"["<<v[i].first<<" "<<v[i].second<<"]";
}

return 0;
}