#include<stdio.h>
#include<string.h>
struct student{
    int age;
    char name[20];
};
int main()
{
    struct student stu1;
    stu1.age=18;
    strcpy(stu1.name,"lixianglong");
    printf("name=%s age=%d",stu1.name,stu1.age);
    return 0;
}
