#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    s.insert(2);
    s.insert(1);
    s.insert(1);
    for(auto x:s)
    cout<<x<<' ';
    cout<<"\n";
    cout<<s.size()<<'\n';//有几个不同的元素
    cout<<s.count(3)<<"\n";
    cout<<s.count(1)<<"\n";
    s.erase(1);
    for(auto x:s)
    cout<<x<<' ';
    cout<<'\n';
    cout<<s.size()<<'\n';
}