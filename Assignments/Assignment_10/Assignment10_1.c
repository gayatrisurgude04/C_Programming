#include<stdio.h>

double CircleArea(float fNo)
{
    double dArea = 0;
    float fPI = 3.14f;

    dArea = fPI * fNo * fNo;

    return dArea;
    
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %lf",dRet);


    return 0;
}
