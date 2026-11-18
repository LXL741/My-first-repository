#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    s="abcd";
    int n=s.size();
    cout<<n<<"\n";
    string s1="ef";
    s=s+s1;
    cout<<s<<"\n";
    string s2=s.substr(1,3);
    cout<<s2<<"\n";
    int m=s.find("cd");
    if(m==-1)cout<<"error!"<<"\n";
    else cout<<m<<"\n";
    s.replace(1,3,"hhh");
    cout<<s;
    return 0;
}