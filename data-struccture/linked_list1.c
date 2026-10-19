#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void print_link(struct Node *head)
{
    struct Node *current = head;
    while(current != NULL)
    {
        printf("%d\n",current->data);
        current = current->next;
    }
}
int main()
{
    struct Node *node1 = (struct Node
        *)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node
        *)malloc(sizeof(struct Node));
    struct Node *node3 = (struct Node
        *)malloc(sizeof(struct Node));
    node1->data=10;
    node1->next=NULL;
    node2->data=20;
    node2->next=NULL;
    node3->data=30;
    printf("node1: %p, data: %d\n", (void*)node1, node1->data);
    printf("node2: %p, data: %d\n", (void*)node2, node2->data);
    printf("node3: %p, data: %d\n", (void*)node3, node3->data);
    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;
    struct Node *p=node1;
    printf("lianbiaoshuju:\n");
    print_link(p);
    return 0;
}
