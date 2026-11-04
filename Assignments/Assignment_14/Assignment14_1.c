#include<stdio.h>

int MulFact(int iNo)
{
    int iCnt = 0, iMul = 0;

    for(iCnt = 1,iMul = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);

    printf("%d",iRet);

    return 0;
}
