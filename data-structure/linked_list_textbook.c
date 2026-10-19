#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
    int data;
    struct LNode *next;
} LNode,*Linklist;

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
    Linklist q=L->next;
    while (q != NULL)
    {
        printf("%d\n",q->data);
        Linklist temp=q;
        q=q->next;
        free(temp);
    }
    return 0;
}