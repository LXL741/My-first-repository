#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*Linklist;

LNode *locate(Linklist L,int n,int *posion)
{
    LNode *p=L->next;
    int j=1;
    while(p != NULL && p->data != n)
    {
        p=p->next;
        j++;
    }
    if(p != NULL)*posion = j;
    return p;
}

int main()
{
    Linklist L=(Linklist)malloc(sizeof(Linklist));
    L->next=NULL;
    LNode *tail = L;
    for(int i=0;i<5;i++)
    {
        LNode *p=(LNode*)malloc(sizeof(LNode));
        p->data=10+10*i;
        p->next=NULL;
        tail->next=p;
        tail=p;
    }
    int n,posion;
    scanf("%d",&n);
    LNode *q=locate(L,n,&posion);
    if(q != NULL)printf("%d\n",posion);
    else printf("not found");
    LNode *m = L;
    LNode *temp;
    while (m != NULL) {
        temp = m;
        m = m->next;
        free(temp);
    }
    return 0;
}