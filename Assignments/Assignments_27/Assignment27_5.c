#include<stdio.h>

void Reverse(char *str)
{
    int iCount = 0, iNo = 0;
    char temp[20];

    while (*str != 0)
    {
        temp[iCount] = *str;
        iCount++;
        *str++;
    }

    iCount = iCount - 1;

    for(iNo = iCount; iNo >= 0;iNo--)
    {
        printf("%c",temp[iNo]);
    }    
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}