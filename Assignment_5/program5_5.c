#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if ((cValue >= 'A') && (cValue <= 'Z') )
    {
        printf("Uppercase alphabet");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase alphabet");
    }
    else if (cValue >= '0' && cValue <= '9' )
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }

    
}
int main()
{
    char cvalue = 0;


    printf("Enter number : ");
    scanf("%c",&cvalue);

    CheckCharacterType(cvalue);

    return EXIT_SUCCESS;
}