#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNFact = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else if ((iNo % iCnt) != 0)
        {
            iSumNFact = iSumNFact + iCnt;
        }
        
    }
    return iSumFact - iSumNFact;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}