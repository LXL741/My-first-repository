#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6};
    sort(a,a+6);
    for(int i=0;i<6;i++)cout<<a[i]<<" ";
    cout<<"\n";
    sort(a,a+6,greater<int>());
    for(int i=0;i<6;i++)cout<<a[i]<<" ";
    cout<<"\n";
    sort(a+2,a+5);
    for(int i=0;i<6;i++)cout<<a[i]<<" ";
    return 0;
}
