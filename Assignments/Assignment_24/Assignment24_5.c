#include<stdio.h>

void StrRev(char *str)
{
    char temp[20];
    int iIndex = 0,iCnt = 0;

    while(*str != '\0')
    {
        temp[iIndex] = *str;
        iIndex++;
        *str++;
    }

    temp[iIndex] = '\0';

    for(iCnt = iIndex; iCnt >= 0; iCnt--)
    {
        printf("%c",temp[iCnt]);
    }
    
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);
    
    StrRev(arr);

    return 0;
}