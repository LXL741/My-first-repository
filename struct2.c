#include<stdio.h>
#include<string.h>
struct Student{
    int id;
    char name[20];
    float score;
};
int main()
{
    struct Student stu1,stu2;
    stu1.id=101;
    strcpy(stu1.name,"LuXun");
    stu1.score=100.0;
    
    stu2=stu1;

    printf("id:%d\n",stu2.id);
    printf("name:%s\n",stu2.name);
    printf("score:%.1f\n",stu2.score);
}