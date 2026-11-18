#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>a[5];

    a[0] = make_pair(3,1);
    a[1] = make_pair(1,5);
    a[2] = make_pair(3,0);
    a[3] = make_pair(2,8);
    a[4] = make_pair(1,2);

    sort(a,a+5);
    for(int i=0;i<5;i++)
    {
        cout << '(' << a[i].first << ',' << a[i].second << ") ";
    }
    return 0;
}