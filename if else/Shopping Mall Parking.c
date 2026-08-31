#include <stdio.h>
int main()
{
    //Additional//
    //Shopping Mall Parking Fees//
    int Hours,Charge;
    printf("Shopping Mall Parking Fees\n");
    printf("enter Number of Hours:");
    scanf("%d",&Hours);
    if (Hours<=2)
    {
        Charge=50;
        printf("The Parking Duration is %dhr\n",Hours);
        printf("The Amount Payable is ₹%d\n",Charge);
    }
    else if (Hours>2 && Hours<=5)
    {
        Charge=100;
        printf("The Parking Duration is %dhr\n",Hours);
        printf("The Amount Payable is ₹%d\n",Charge);
    }
        else if (Hours>5 && Hours<=10)
    {
         Charge=200;
        printf("The Parking Duration is %dhr\n",Hours);
        printf("The Amount Payable is ₹%d\n",Charge);
    }
    else if (Hours>=10)
    {
         Charge=350;
        printf("The Parking Duration is %dhr\n",Hours);
        printf("The Amount Payable is ₹%d\n",Charge);
    }
    
}
