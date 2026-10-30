#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter Distance: ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is: %d",iRet);


    return 0;
}