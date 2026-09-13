#include<stdio.h>
void bubble(int a[],int n)
{
    int temp;
    int i;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void selection(int a[],int n)
{
    int temp1;
    int i;
    for(i=0;i<n;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp1=a[min];
        a[min]=a[i];
        a[i]=temp1;
    }
}
int main()
{
    int a[]={1,21,80,40,10,20};
    int n=6;
    bubble(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    selection(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0; 
}