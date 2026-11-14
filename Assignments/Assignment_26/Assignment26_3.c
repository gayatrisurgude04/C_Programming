#include<stdio.h>

void Display(char ch)
{
    char cCount = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(cCount = ch; cCount <= 'Z';cCount++)
        {
            printf("%c\t",cCount);
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for(cCount = ch; cCount >= 'a';cCount--)
        {
            printf("%c\t",cCount);
        }
    }
    else 
    {
       printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}