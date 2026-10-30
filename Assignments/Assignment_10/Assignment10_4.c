#include<stdio.h>

double FhtoCs(float fNo)
{
    double dCs = 0.0;

    dCs = (fNo - 32) * (5.0/9.0);

    return dCs;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    
    printf("Enter temperature in Fahrenhit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celcius is: %lf",dRet);


    return 0;
}