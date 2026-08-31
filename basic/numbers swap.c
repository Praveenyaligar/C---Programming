#include <stdio.h>
int main()
{
    int x,y,s;
    printf("Enter any two numbers :");
    scanf("%d %d",&x,&y);
    s=x;
    x=y;
    y=s;
    printf("number after a swap x=%d,y=%d",x,y);
}
