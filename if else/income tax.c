#include <stdio.h>
int main ()
{
    //3//
    //Income Tax//
    int income,Tax;
    printf("Income tax\n");
    printf("Enter Income:");
    scanf("%d",&income);
    if (income <=250000)
    {
        printf("No Tax");
    }
    else if(income>250000 && income <=500000)
    {
        Tax=(income*5)/100;
       printf ("Tax Payable is ₹%d",Tax);
    }
    else if(income>500000 && income<=1000000)
    {
       Tax=(income*20)/100; 
       printf ("Tax Payable is ₹%d",Tax);
    }
    else 
    {
        Tax=(income*30)/100; 
       printf ("Tax Payable is ₹%d",Tax);
    }
    return 0;
}
