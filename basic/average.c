#include <stdio.h>
int main()
{
    int a,b,c,x,ans;
    printf("Enter any 3 numbers : ");
    scanf("%d,%d,%d",&a,&b,&c);
    x = a+b+c;
    ans = x/3;
    printf("The average of 3 numbers is : %d",ans);
    
    return 0;
    
}
