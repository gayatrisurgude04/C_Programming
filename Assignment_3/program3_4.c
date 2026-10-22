#include<stdio.h>

void DisplayCoverter(char CValue)
{
    if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("%c",CValue - 32);
    }
    else if ((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c",CValue + 32);
    }
    
}

int main()
{
    char cValue = '\0';

    printf("Enter character ; \n");
    scanf("%c",&cValue);

    DisplayCoverter(cValue);

    return 0;
}