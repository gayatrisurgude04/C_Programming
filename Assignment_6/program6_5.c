#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if((fSalary <= 0) || (iYears <= 0))
    {
        printf("Invalid input");
    }
    else if (iYears > 10)
    {
        fBonus = (fSalary * 15) / 100;
        printf("Bonus is %f",fBonus);
    }
    else if ((iYears <= 10) && (iYears >= 5))
    {
        fBonus = (fSalary * 10) / 100;
        printf("Bonus is %f",fBonus);
    }
    else if (iYears < 5)
    {
        fBonus = (fSalary * 5) / 100;
        printf("Bonus is %f",fBonus);
    }
    
}

int main()
{
    float fsalary =0.0f;
    int iyears = 0;

    printf("Enter salary and year of services : ");
    scanf("%f %d",&fsalary,&iyears);

    CalculateBonus(fsalary,iyears);

    return EXIT_SUCCESS;
}