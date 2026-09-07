#include <stdio.h>
int main ()
{
    int T;
    int Bal;
    Bal=1000;
    printf("Select the option :\n1\n2\n3\n");
    scanf("%d",&T);
    switch (T)
    {
        case 1:
        printf("Check Balance\n");
        break;
        
        case 2:
        printf("Deposit Cash\n");
        break;
        
        case 3:
        printf("Cash Withdraw \n");
        if( Bal  >=1000)
        printf("Enter Amount\n");
        else
        printf("insufficiant Balance\n");
        break;
        
        default:
        printf("Invalid option");
    }
}
