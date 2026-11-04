#include<stdio.h>

int MulDigits(int iNo)
{
    int iDigit = 0, iMul = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMul = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMul = iMul * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;
    

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);

    printf("%d",iRet);


    return 0;
}