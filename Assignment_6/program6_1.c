#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits <= 0)
    {
        printf("Invalid input");
    }
    else if (iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill is %f",fBill);
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
        printf("Bill is %f",fBill);
    }
    else if (iUnits > 200)
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
        printf("Bill is %f",fBill);
    }
    
}

int main()
{
    int iunits = 0;


    printf("Enter consumed Units : ");
    scanf("%d",&iunits);

    CalculateElectricityBill(iunits);

    return EXIT_SUCCESS;
}