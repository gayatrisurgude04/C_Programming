#include<stdio.h>

float Percentage(float fTMarks, float fOMarks)
{
    float fPercent = 0.0f;
    
    if(fTMarks != 0 || fOMarks != 0) 
    {
        fPercent = (fOMarks / fTMarks) * 100;
    }
    return fPercent;
}

int main()
{
    float fValue1 = 0, fValue2 = 0;
    float fRet = 0.0f;
    
    printf("Please enter total marks: ");
    scanf("%f",&fValue1);

    printf("Please enter obtained marks: ");
    scanf("%f",&fValue2);

    fRet = Percentage(fValue1,fValue2);
    
    printf("%.2f",fRet);

    return 0;
}