#include <stdio.h>
int main()
{
    int x;
    
    printf("Eter your choice 1,2,3,4,5,6,7\n :");
    scanf("%d",&x);
    switch (x)
    {
        case 1:
        printf("Monday");
        break;
        
        case 2:
        printf("Tuesday");
        break;
        
        case 3:
        printf("Wednesday");
        break;
        
        case 4:
        printf("Thursday");
        break;
        
        case 5:
        printf("Friday");
        break;
        
        case 6:
        printf("Saturday");
        break;
        
        case 7:
        printf("Sunday");
        break;
        
        default:
        printf("invalid choice");
    }
    
}
