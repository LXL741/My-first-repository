#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*Linklist;

LNode *insert(Linklist L,int i,int m)
{
    LNode *p=L;
    int j=0;
    while (p != NULL && j<i-1)
    {
        p=p->next;
        j++;
    }
    if(p == NULL || j>i-1)return NULL;
    LNode *s=(LNode *)malloc(sizeof(LNode));
    if(s==NULL)return NULL;
    s->data=m;
    s->next=p->next;
    p->next=s;
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
    int i,m;
    scanf("%d %d",&i,&m);
    Linklist q=insert(L,i,m);
    if(q != NULL)
    {
    LNode *current = q->next;
    while(current != NULL)
    {
    printf("%d ",current->data);
    current=current->next;
    }
    }
    else printf("error!");
    LNode *current=L;
    Linklist temp;
    while(current != NULL)
    {
        temp=current;
        current=current->next;
        free(temp);
    }
    return 0;
}