#include<stdio.h>
#include<string.h>
struct Node {
    int data;
    struct Node *next;
};
struct Student{
    int id;
    char name[20];
    float score;
};
int main()
{
    struct Student stu1;
    stu1.id=101;
    strcpy(stu1.name,"LuXun");
    stu1.score=100.0;
    printf("id:%d\n",stu1.id);
    printf("name:%s\n",stu1.name);
    printf("score:%.1f\n",stu1.score);
    struct Student *ptr=&stu1;
    printf("\nyongzhizhenfangwen\n");
    printf("id:%d\n",ptr->id);
    printf("name:%s\n",ptr->name);
    printf("score:%.1f\n",ptr->score);

    return 0;
}