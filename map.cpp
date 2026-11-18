#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*map<int,int>mp;
    mp[121]=100;
    mp[80]=88;
    mp[66]=66;
    cout<<mp[121]<<' '<<mp[80]<<' '<<mp[66]<<'\n';*/
    map<int,int>mp;
    int a[8]={1,1,6,8,5,3,5,6};
    for(int i=0;i<8;i++)
    {
        mp[a[i]]++;
    }
    for(auto p:mp)
    {
        cout<<p.first<<' '<<"times:"<<p.second<<'\n';
    }
    /*if(mp.find(1000)==mp.end())
    cout<<"error!";*/
    if (mp.count(1000) == 0) cout << "error!\n";
    return 0;
}