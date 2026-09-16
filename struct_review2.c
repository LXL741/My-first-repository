#include<stdio.h>
#include<string.h>
struct student{
    int id;
    char name[20];
    int age;
};
void print_student(struct student *p)
{
    printf("name=%s age=%d id=%d"
        ,p->name,p->age,p->id);
}

int main()
{
    struct student class[3];
    int i;
    for(i=0;i<3;i++)
    {
        class[i].id=100+i;
        class[i].age=18+i;
        sprintf(class[i].name,"student%d",i+1);
    }

    struct student *p=class;
    for(int i=0;i<3;i++)
    {
        print_student(p);
        p++;
        printf("\n");
    }
}