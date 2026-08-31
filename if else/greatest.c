#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter 4 number");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("a is greatest %d",a);
    }
    else
    if(b>a && b>c && b>d)
    {
        printf("b is greatest %d",b);
    }
    else
    if(c>a && c>b && c>d)
    {
        printf("c is greatest %d",c);
    }
    else
    {
        printf("d is greatest %d",d);
    }
    return 0;
}
