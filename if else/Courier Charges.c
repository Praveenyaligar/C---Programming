#include <stdio.h>
int main()
{
    //10//
    //Courier Charges Based on Package Weight
    int Weight,Charge;
    printf("Courier Charges Based on Package Weight\n");
    printf("enter Package Weight:");
    scanf("%d",&Weight);
    if(Weight<=1)
    {
        Charge=80;
        printf("Payable Amount is ₹%d\n",Charge);
        printf("The Weight is %d kg\n",Weight);
    }
    else if(Weight>1 &&  Weight<=5)
    {
       Charge=150;
        printf("Payable Amount is ₹%d\n",Charge);
        printf("The Weight is %d kg\n",Weight); 
    }
    else if (Weight>5 && Weight<=10)
    {
        Charge=250;
        printf("Payable Amount is ₹%d\n",Charge);
        printf("The Weight is %d kg\n",Weight);
    }
    else if (Weight>=10)
    {
        Charge=500;
        printf("Payable Amount is ₹%d\n",Charge);
        printf("The Weight is %d kg\n",Weight);
    }
}
