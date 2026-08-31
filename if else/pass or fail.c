#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,s6,total;
    float percentage;
    printf("enter 7 subject marks");
    scanf("%d,%d,%d,%d,%d,%d",&s1,&s2,&s3,&s4,&s5,&s6);
    total=s1+s2+s3+s4+s5+s6;
    percentage=total/600.0*100;
    printf("the total is %d\n",total);
    printf("the percentage is %f\n",percentage);
    if(percentage>=75)
    {
        printf("distinction");
    }
    if (percentage >=60 && percentage<75)
    {
        printf("first class");
    }
    if(percentage>=50 && percentage<60)
    {
        printf("second class");
    }
    if (percentage >=45 && percentage<50)
    {
        printf("pass");
    }
    if(percentage <45)
    {
        printf("fail");
    }
    return 0;
}
