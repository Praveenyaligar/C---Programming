#include <stdio.h>
int main ()
{
    //4//
    //Amusement Park Ticket Price//
    int age;
    printf("//Amusement Park Ticket Price//\n");
    printf("Enter age:");
    scanf("%d",&age);
    if (age<5)
    {
        printf("Free");
    }
    else if (age >=5 && age <=12)
    {
        printf("₹150 Per Person");
    }
    else if (age>=13 && age <=59)
    {
        printf("₹300 Per Person");
    }
    else if (age>=60)
    {
        printf("₹200 Per Person");
    }
}
