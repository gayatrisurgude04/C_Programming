#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iMul = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo ;
    }

    iMul = iNo;

    for(iCnt = --iNo; iCnt > 0; iCnt--)
    {
        iMul = iMul * iCnt;
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is: %d",iRet);

    return 0;
}