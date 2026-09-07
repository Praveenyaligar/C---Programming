#include <stdio.h>
int main()
{
    int choice;
    float c,f;
    printf("Enter your choice :1,2 \n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("Enter celcius : ");
        scanf("%f",&c);
        f = c*9/5+32;
        printf("Fahrenheit is %f",f);
        break;
        
        case 2:
        printf("Enter Fahrenheit :");
        scanf("%f",&f);
        c = (f - 32) *5/9;
        printf("Celcius is %f c",c);
        break;
        
        default:
        printf("invalid choice");
    }
}
