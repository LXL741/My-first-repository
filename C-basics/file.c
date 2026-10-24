#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char name[50];
    char author[30];
    float price;
}Book;

int main()
{
    Book a;
    FILE *fp;
   
    fp=fopen("demo.txt","a");
    if(fp==NULL)
    {
        printf("error!");
        return 1;
    }
    for(int i=0;i<3;i++)
    {
    printf("name:");
    scanf("%s",a.name);
    printf("author:");
    scanf("%s",a.author);
    printf("price:");
    scanf("%f",&a.price);
    fprintf(fp,"%s %s %.2f\n",a.name,a.author,a.price);
    }
    printf("OK\n");
    fclose(fp);

    Book b;
    fp=fopen("demo.txt","r");
    if(fp==NULL)
    {
        printf("error!");
        return 1;
    }
    while(fscanf(fp,"%s %s %f",b.name,b.author,&b.price)==3)
    {
        printf("name:%s author:%s price:%.2f\n",b.name,b.author,b.price);
    }
    fclose(fp);
    return 0;
}