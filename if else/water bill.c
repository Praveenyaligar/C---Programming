#include <stdio.h>
int main()
{
    //9//
    //Muncipal Corporation Water Bill Charges//
    int liters;
    printf("Muncipal Corporation Water Bill Charges\n");
    printf("Enter water consumed in liters:");
    scanf("%d",&liters);
    if (liters<=20000)
    {
        printf("liters of water consumed is %d\n",liters);
        printf("The bill is ₹100\n");
    }
    else if(liters>20000 && liters <=40000)
    {
      printf("liters of water consumed is %d\n",liters);
        printf("The bill is ₹250\n");  
    }
    else if (liters>40000)
    {
        printf("liters of water consumed is %d\n",liters);
        printf("The bill is ₹500\n");
    }
}
