#include<stdio.h>
#include<string.h>
struct Student{
    int id;
    char name[20];
    float score;
};
int main()
{
    struct Student class1[3];
    class1[0].id = 101;
    strcpy(class1[0].name, "LuXun");
    class1[0].score = 85.5;

    class1[1].id = 102;
    strcpy(class1[1].name, "LiXianglong");
    class1[1].score = 92.0;

    class1[2].id = 103;
    strcpy(class1[2].name, "XiaoMing");
    class1[2].score = 78.5;

    printf("---STUDENT---\n");
    for(int i=0;i<3;i++)
    {
        printf("ID:%d,Name:%s,Score:%.1f\n",
            class1[i].id,class1[i].name,
            class1[i].score);      
    }
    return 0;
}