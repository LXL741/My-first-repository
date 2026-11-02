#include<stdio.h>
#include<stdlib.h>

int cmp(const void* a,const void* b)
{
    int x = *((const int*)a), y = *((const int*)b);
    return (x > y) - (x < y);
}

int main()
{
    int a[]={1,6,8,5,4,2,1};
    int len=7;
    qsort(a,len,sizeof(a[0]),cmp);
    for(int i=0;i<len;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}