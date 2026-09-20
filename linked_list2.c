#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *tail = NULL;
    struct Node *node1 = (struct Node
        *)malloc(sizeof(struct Node));
    node1->data=10;
    node1->next=NULL;
    head=node1;
    tail=node1;
    for(int i=0;i<4;i++)
    {
        struct Node *node = (struct Node 
        *)malloc(sizeof(struct Node));
        node->data=20+i*10;
        node->next=NULL;
        tail->next=node;
        tail=node;
    }
    struct Node *current = head;
    while(current != NULL)
    {
        printf("%d\n",current->data);
        struct Node *temp = current;
        current=current->next;
        free(temp);
    }
    return 0;
}
