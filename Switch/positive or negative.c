#include <stdio.h>
int main()
{
    int x;
    int ans;
    printf("enter a number : ");
    scanf("%d",&x);
    
    if(x>0)
    ans = 1;
    else if (x<0)
    ans = 2;
    else
    ans = 3;
    switch (ans)
    {
        case 1:
        printf("Positive");
        break;
        
        case 2:
        printf("Negative");
        break;
        
        case 3:
        printf("Zero");
        break;
    }
    
}
