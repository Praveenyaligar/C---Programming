#include <stdio.h>
int main()
{
    char al;
    printf("Enter any alphabet\n");
    scanf("%c",&al);
    switch (al)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("vowel");
        break;
        
        default:
        printf("Consonant");
    }
}
