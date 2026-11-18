#include<bits/stdc++.h>
using namespace std;

struct node{
    int num;
    int Chinese;
    int English;
    int Math;
}stu[1005];

bool cmp(node a,node b)
{
    return a.Math<b.Math;
}
int main()
{
    stu[0] = {1, 99, 88, 77};
    stu[1] = {2, 90, 85, 80};
    stu[2] = {3, 70, 60, 50};
    int n=3;
    sort(stu,stu+3,cmp);
    for(int i=0;i<3;i++)
    {
        cout<<stu[i].num<<"\n";
    }
    return 0;
}