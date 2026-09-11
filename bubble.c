#include <stdio.h>
int main()
{
    int a[]={5, 2, 9, 1, 5, 3};
    int n=6;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
