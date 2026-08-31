#include <stdio.h>
int main()
{
    int age;
    char nationality [50];
    printf("enter age:");
    scanf("%d",&age);
    printf("Enter Nationality:");
    scanf("%49s",&nationality);
    if(age>18 && nationality=="Indian")
    {
        printf("eligible to vote");
    }
    else if(age<18)
    {
        printf("not eligible");
    }
    if(age>60 && nationality=="indian")
    {
        printf("senior citizen");
    }
    return 0;
}
