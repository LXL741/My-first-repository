#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*Linklist;

Linklist delete(Linklist L,int i)
{
    LNode *p=L;
    int j=0;
    while (p != NULL && j<i-1)
    {
        p=p->next;
        j++;
    }
    if(p == NULL || j>i-1)return NULL;
    LNode *q = p->next;
    p->next=q->next;
    free(q);
    return L;
}
int main()
{
    Linklist L=(Linklist)malloc(sizeof(LNode));
    L->next=NULL;
    LNode *tail = L;
    for(int i=0;i<5;i++)
    {
        LNode *p=(LNode *)malloc(sizeof(LNode));
        p->data=10+10*i;
        p->next=NULL;
        tail->next=p;
        tail=p;
    }
    int i;
    scanf("%d",&i);
    LNode *p = delete(L,i);
    if(p != NULL)
    {
        LNode *current = p->next;
        LNode *temp;
        while(current != NULL)
        {
            temp=current;
            printf("%d ",current->data);
            current=current->next;
            free(temp);
        }
    }else printf("error!");
    free(p);
    return 0;
}