#include<stdio.h>

int LastChar(char *str,char ch)
{
    int iCount = 0, iNo = 0;

    while(*str != 0)
    {
    
        if(ch == *str)
        {
           iNo = iCount; 
        }
        iCount++;
        *str++;
    }
    return iNo;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter the character: ");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Character location is: %d",iRet);

    return 0;
}