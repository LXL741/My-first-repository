#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[8]={1,1,6,8,5,3,5,6};
    int n=8;
    unordered_map<int,int>mp;//比map更快但是无顺序
    mp.reserve(n*2);//防卡
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
     for(auto p:mp)
    {
        cout<<p.first<<' '<<"times:"<<p.second<<'\n';
    }
    return 0;
}