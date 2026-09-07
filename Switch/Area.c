#include <stdio.h>
int main()
{
    int S ,r,l,w,b,h;
    int ans;
    printf("enter Your choice \n1 - Circle\n2 - Rectangle\n3 - Triangle\n");
    scanf("%d",&S);
    switch (S)
    {
        case 1:
        printf("Enter radius : ");
        scanf("%d",&r);
        ans = 3.14 *r*r;
        printf("The Area of Circle is %d",ans);
        break;
        
        case 2:
        printf("Enter length and Width \n");
        scanf("%d,%d",&l,&w);
        ans = l * b;
        printf("The Area of Rectangle is %d",ans);
        break;
        
        case 3:
        printf("Enter Base and Height \n");
        scanf("%d,%d",&b,&h);
        ans = 0.5*b*h;
        printf("The Area of Triangle is %d",ans);
        break;
        
        default:
        printf("Invalid Choice");
    }
}
