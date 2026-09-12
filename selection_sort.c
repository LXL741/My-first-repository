#include <stdio.h>
int main()
{
    int a[]={1,10,6,8,21,7,8};
    int n=7;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        } 
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}