#include<stdio.h>

int DollarToINR(int iNo)
{
    int dollar = 0;

    dollar = iNo * 70;

    return dollar;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is: %d",iRet);

    return 0;
}