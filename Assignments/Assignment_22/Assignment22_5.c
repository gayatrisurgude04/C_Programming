#include<stdio.h>

void Pattern(int iNo)
{
    int iEven = 0,iCount = 0;
    
    iEven = 1;
    iCount = 1;
    while (iCount <= iNo)
    {
        if((iEven % 2) == 0)
        {
            printf("%d\t",iEven);
            iCount++;
        }
        iEven++;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}