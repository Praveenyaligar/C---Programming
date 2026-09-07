#include <stdio.h>
int main()
{
    int x,y,ans;
    int C;
    printf("enter your choice 1-add,2-sub,3-multiply,4-sqaure,5-cube\n :");
    scanf("%d",&C);
    switch (C) 
    {
        case 1:
        printf("enter two numbers : ");
        scanf("%d,%d",&x,&y);
        ans=x+y;
        printf("The sum of a number is %d",ans);
        break;
    
      case 2:
     printf("enter two numbers : ");
     scanf("%d,%d",&x,&y);
     ans=x-y;
     printf("The subtraction of a number is %d",ans);
     break;
    
     case 3:
     printf("enter two numbers : ");
     scanf("%d,%d",&x,&y);
     ans=x*y;
     printf("The multiple of numbers is %d",ans);
     break;
    
     case 4:
     printf("enter a number : ");
     scanf("%d",&x);
     ans=x*x;
     printf("The square of a number is %d",ans);
     break;
    
     case 5:
     printf("enter a number : ");
     scanf("%d",&x);
     ans=x*x*x;
     printf("the cube of number is %d",ans);
     break;
     
     default:
     printf("Invalid choice");
    }
}
