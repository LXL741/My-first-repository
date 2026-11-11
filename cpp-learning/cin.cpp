#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);//关闭c与c++同步
    cin.tie(nullptr);//解除cin对cout的自动flush
    //必须放在任何输入输出之前
    //不能混用两套输入输出
    return 0;
}