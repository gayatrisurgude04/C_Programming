#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cVowel)
{
    if((cVowel == 'a') || (cVowel == 'e') ||(cVowel == 'i') || (cVowel == 'o') || (cVowel == 'u') ||
       (cVowel == 'A') || (cVowel == 'E') ||(cVowel == 'I') || (cVowel == 'O') || (cVowel == 'U'))
       {
            return TRUE;
       }
       else
       {
        return FALSE;
       }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}