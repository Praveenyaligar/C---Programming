#include <stdio.h>
int main()
{
    //7//
    //Loan Eligibility//
    int Monthly_salary;
    printf("Loan Eligibility\n");
    printf("Enter Salary:");
    scanf("%d",&Monthly_salary);
    if (Monthly_salary<20000)
    {
        printf("Not Eligible");
    }
    else if (Monthly_salary>20000 && Monthly_salary<=49999)
    {
        printf("Eligible For ₹2 lakh Loan");
    }
    else if (Monthly_salary>50000 && Monthly_salary <=99999)
    {
        printf("Eligible For ₹5 lakh Loan");
    }
    else if(Monthly_salary>=100000)
    {
        printf("Eligible For ₹10 lakh Loan");
    }
}
