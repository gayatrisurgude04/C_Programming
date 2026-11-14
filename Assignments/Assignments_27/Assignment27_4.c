#include<stdio.h>

int Difference(char *str)
{
    int iCountCapital = 0, iCountSmall = 0;

    while (*str != 0)
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
           iCountCapital++;
        }
        
        *str++;
    }
    return iCountSmall - iCountCapital;    
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}