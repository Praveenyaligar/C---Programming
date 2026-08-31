#include <stdio.h>
int main()
{
    //1//
    //Electricity Bill//
    int unit,total_bill;
    printf("Electricity Bill\n");
    printf("Enter Number of Units:");
    scanf("%d",&unit);
    if (unit <=100)
    {
        total_bill= unit * 5;
        printf("total_bill is ₹%d",total_bill);
    }
    else
    if(unit <=200)
    {
        total_bill= unit * 7;
        printf("total_bill is ₹%d",total_bill);

    }
    else
    if(unit >200)
    {
        total_bill= unit * 10;
        printf("total_bill is ₹%d",total_bill);
        
    }
    return 0;
}
