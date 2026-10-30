#include<stdio.h>

double SquareMeter(int iNo)
{
    double dSqme = 0.0;

    dSqme = iNo * 0.0929;

    return dSqme;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0f;
    
    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is: %lf",dRet);

    return 0;
}