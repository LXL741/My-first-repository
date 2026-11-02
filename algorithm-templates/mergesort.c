#include<stdio.h>
#include<stdlib.h>

//合并
void merge(int arr[],int temparr[],int left,int mid,int right)
{
    int l_pos=left;
    int r_pos=mid+1;
    //临时数组下标
    int pos=left;
    //合并
    while(l_pos <= mid && r_pos <= right)
    {
        if(arr[l_pos]<=arr[r_pos])//左半区剩下的第一个元素更小或相等
            temparr[pos++]=arr[l_pos++];
        else                      //右半区剩下的第一个元素更小
            temparr[pos++]=arr[r_pos++];
    }
    //合并左边剩下的元素
    while(l_pos<=mid)
        temparr[pos++]=arr[l_pos++];
    //合并右边剩下的元素
    while(r_pos<=right)
        temparr[pos++]=arr[r_pos++];
    //排序结果复制到原数组中
    while(left<=right)
    {
        arr[left]=temparr[left];
        left++;
    }
}
//归并排序
void msort(int arr[],int temparr[],int left,int right)
{
    //如果只有一个元素就不需要划分，本来就有序
    if(left<right)
    {
        //找中间点
        int mid = (left+right)/2;
        //递归划分排序左半区
        msort(arr,temparr,left,mid);
        //递归划分排序右半区
        msort(arr,temparr,mid+1,right);
        //合并
        merge(arr,temparr,left,mid,right);
    }
}
//归并排序入口
void merge_sort(int arr[],int n)
{
    //分配辅助数组
    int* temparr = (int*)malloc(n * sizeof(int));
    if(temparr != NULL)//分配成功
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