#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*Linklist;

void Getelem(Linklist L,int i)
{
    LNode *p = L->next;
    int j = 1;
    while(p != NULL && j<i)
    {
        p=p->next;
        j++;
    }
    if(p == NULL || j>i)printf("error!");
    else printf("%d",p->data);
}
int main()
{
    Linklist L=(Linklist)malloc(sizeof(LNode));
    L->next=NULL;
    Linklist tail=L;
    for(int i=0;i<5;i++)
    {
        Linklist p=(Linklist)malloc(sizeof(LNode));
        p->data=10+10*i;
        p->next=NULL;
        tail->next=p;
        tail=p;
    }
    int i;
    scanf("%d",&i);
    Getelem(L,i);
    Linklist q=L->next;
    while (q != NULL)
    {
        Linklist temp=q;
        q=q->next;
        free(temp);
    }
    return 0;
}