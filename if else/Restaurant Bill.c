#include <stdio.h>
int main()
{
    //8//
    //Restaurant Bill With "Discount"//
    int Bill,Discount,Grand_total;
    printf("Restaurant Bill Discount\n");
    printf("Enter Bill Amount:");
    scanf("%d",&Bill);
    if (Bill<500)
    {
        printf("No Discount");
    }
    else if(Bill>500 && Bill<=999)
    {
        Discount=(Bill*10)/100;
        Grand_total=Bill-Discount;
        printf("Discount 10%\n");
        printf("The Grand_total is ₹%d",Grand_total); 
    }
    else if(Bill>1000 && Bill<=1999)
    {
       Discount=(Bill*15)/100;
        Grand_total=Bill-Discount;
        printf("Discount 15%\n");
        printf("The Grand_total is ₹%d",Grand_total); 
    }
    else if(Bill>=2000)
    {
        Discount=(Bill*20)/100;
        Grand_total=Bill-Discount;
        printf("Discount 20%\n");
        printf("The Grand_total is ₹%d",Grand_total); 
    }
}
