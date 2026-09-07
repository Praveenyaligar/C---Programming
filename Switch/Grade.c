#include <stdio.h>
int main()
{
    int p;
    printf("Enter your  percentage :\n");
    scanf("%d",&p);
    switch (p / 10)
    {
        case 10:
        case 9:
        printf("Grade - A");
        break;
        
        case 8:
        printf("Grade - B");
        break;
        
        case 7:
        printf("Grade - C");
        break;
        
        case 6:
        printf("Grade - D");
        break;
        
        default :
        printf("F");
    }
}
