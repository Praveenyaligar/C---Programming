#include <stdio.h>
int main()
{
    //6//
    //Moblie Reacharge Suggestions//
    int Budget;
    printf("# Mobile Reacharge Suggestions #\n");
    printf("Enter Budget");
    scanf("%d",&Budget);
    if (Budget < 200)
    {
        printf("Basic Package");
    }
    else if (Budget>200 && Budget <=399)
    {
        printf("Standard Package");
    }
    else if (Budget>400 && Budget<=699)
    {
        printf("Premium Package");
    }
    else if (Budget>700)
    {
        printf("Unlimited Package");
    }
    
}
