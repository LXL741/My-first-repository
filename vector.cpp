#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<"\n";
    //auto m=find(v.begin(),v.end(),3)-v.begin();
    //cout<<m;
    auto m=find(v.begin(),v.end(),3);
    v.erase(m);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
    return 0;
}