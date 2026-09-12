#include<stdio.h>
int main()
{
    int a[]={5,5,2,1,9,6};
    int n=6;
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>=a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}