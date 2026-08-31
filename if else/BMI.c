#include <stdio.h>
int main()
{
    //5//
    // BMI //
    float BMI;
    printf("! BMI Category !\n");
    printf("Enter BMI");
    scanf("%f",&BMI);
    if(BMI <=18.5)
    {
        printf("Underweight");
    }
    else if(BMI >=18.5 && BMI <=24.9)
    {
        printf("Normal");
    }
    else if (BMI>=25 && BMI<=29.9)
    {
        printf("Overweight");
    }
    else if (BMI==30 && BMI>30)
    {
        printf("Obese");
    }
}
