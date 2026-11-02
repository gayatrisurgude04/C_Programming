#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iFreq = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 2)
        {
            iFreq++;
        }    
        iNo = iNo / 10;
    }
    return iFreq;
}

int main()
{
    int iValue = 0, iRet = 0;
    

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d",iRet);


    return 0;
}