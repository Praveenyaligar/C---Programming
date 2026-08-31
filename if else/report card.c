#include <stdio.h>
int main()
{
    //2//
    //Report Card//
    int marks;
    printf("Report Card\n");
    printf("Enter Marks:");
    scanf("%d",&marks);
    if(marks >=90 && marks<=100)
    {
        printf("A Grade");
    }
    else if(marks>=80 && marks<=89)
    {
        printf("B Grade");
    }
    else if(marks>=70 && marks<=79)
    {
        printf("C Grade");
    }
    else if(marks >=60 && marks <=69)
    {
        printf("D Grade");
    }
    else if (marks <60)
    {
        printf("Fail");
    }
    else if(marks<0 || marks > 100)
    {
        printf("Invalid Marks");
    }
    
}
