#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int temparr[],int mid,int left,int right)
{
    int l_pos=left;
    int r_pos=mid+1;
    int pos=left;
    while(l_pos<=mid && r_pos<=right)
    {
        if(arr[l_pos]>=arr[r_pos])
            temparr[pos++]=arr[l_pos++];
        else
            temparr[pos++]=arr[r_pos++];
    }
    while(l_pos<=mid)
    {
        temparr[pos++]=arr[l_pos++];
    }
    while(r_pos<=right)
    {
        temparr[pos++]=arr[r_pos++];
    }
    while(left<=right)
    {
        arr[left]=temparr[left];
        left++;
    }
}

void msort(int arr[],int temparr[],int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        msort(arr,temparr,left,mid);
        msort(arr,temparr,mid+1,right);
        merge(arr,temparr,mid,left,right);
    }
}

void merge_sort(int arr[],int n)
{
    int* temparr=(int*)malloc(n*sizeof(int));
    if(temparr != NULL)
    {
        msort(arr,temparr,0,n-1);
        free(temparr);
    }
}

int main()
{
    int arr[]={8,6,11,20,88,62,21,8,1,2,6};
    int n=11;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    merge_sort(arr,n);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}