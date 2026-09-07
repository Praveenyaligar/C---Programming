#include <stdio.h>
int main()
{
    int a,b,ans;
    int opt;
    printf("Enter your choice :  1-+ , 2--, 3-/, 4-*, 5-%\n :");
    scanf("%d",&opt);
    switch (opt)
    {
        case 1:
        printf("Enter any two numbers : ");
        scanf("%d,%d",&a,&b);
        ans=a + b;
        printf("The sum of two numbers is %d",ans);
        break ;
        
        case 2:
        printf("Enter any two numbers : ");
        scanf("%d,%d",&a,&b);
        ans=a - b;
        printf("The subtraction of the two  numbers is %d",ans);
        break;
        
        case 3:
        printf("Enter any two numbers : ");
        scanf("%d,%d",&a,&b);
        ans=a / b;
        printf("The division of two numbers is %d",ans);
        break ;
        
        case 4:
        printf("Enter any two numbers : ");
        scanf("%d,%d",&a,&b);
        ans=a * b;
        printf("The mutiplication of two numbers is %d",ans);
        break ;
        
        case 5:
        printf("Enter any two numbers : ");
        scanf("%d,%d",&a,&b);
        ans=a % b;
        printf("The remainder is %d",ans);
        break ;
        
        default :
        printf("Invalid choice");
    }
    
}
