#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

typedef struct{
    int data[MAXSIZE];
    int length;
}SeqList;

void initList(SeqList *L)
{
    L->length=0;
}

int Insert(SeqList *L,int i,int m)
{
    if(i<1||i>L->length+1)return 0;
    if(L->length == MAXSIZE)return 0;
    for(int j=L->length;j>i-1;j--)
    {
        L->data[j] = L->data[j-1];
    }
    L->data[i-1]=m;
    L->length++;
    return 1;
}

int Delete(SeqList *L,int i)
{
    if(i<1||i>L->length)return 0;
    for(int j=i;j<L->length;j++)
    {
        L->data[j-1]=L->data[j];
    }
    L->length--;
}

void print(SeqList *L)
{
    for(int i=0;i<L->length;i++)
    {
        printf("%d ",L->data[i]);
    }
}

int main()
{
    SeqList *L = (SeqList *)malloc(sizeof(SeqList));
    initList(L);
    for(int i=1;i<6;i++)
    {
        Insert(L,i,10*i);
    }
    print(L);
    printf("\n");
    int i;
    Delete(L,1);//输入几删除第几个
    print(L);
    free(L);
    return 0;
}