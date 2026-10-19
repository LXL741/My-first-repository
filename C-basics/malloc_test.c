#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *p = (struct Node
        *)malloc(sizeof(struct Node));
        
        if(p==NULL){
            printf("内存申请失败！\n");
            return 1;
        }
        p->data=100;
        p->next=NULL;
        printf("p->data=%d\n",p->data);
        free(p);
        p=NULL;
        return 0;
}
