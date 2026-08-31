#include <stdio.h>
int main()
{
    int age;
    char favourite_hobby [50];
    char city[50];
    char name[50];
    
    printf("Personal Bio-data\n");

    printf("enter name:");
    scanf("%49s",name);
    
    printf("enter city:");
    scanf("%49s",&city);
    
    printf("favourite_hobby:");
    scanf("%49s",&favourite_hobby);
    
    printf("enter age:");
    scanf("%d",&age);
    
    printf("Personal Bio-data:\n");
    printf("name:%s\n",name);
    printf("age:%d\n",age);
    printf("favourite_hobby:%s\n",favourite_hobby);
    printf("city:%s\n",city);
}
