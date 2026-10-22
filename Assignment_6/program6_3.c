#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount <= 0)
    {
        printf("Invalid input");
    }
    else if ((fAmount >= 1000) && (fAmount <= 5000))
    {
        fDiscount = (fAmount * 10) / 100 ;
        fFinalAmount = fAmount - fDiscount ;
        printf("Payable amount =  %f",fFinalAmount);
    }
    else if (fAmount > 5000)
    {
        fDiscount = (fAmount * 20) / 100 ;
        fFinalAmount = fAmount - fDiscount ;
        printf("Payable amount =  %f",fFinalAmount);
    }
    else
    {
        printf("Payable amount =  %f",fAmount);
    }
    
}

int main()
{
    float famount = 0.0f;


    printf("Enter purchase amount : ");
    scanf("%f",&famount);

    CalculateDiscount(famount);

    return EXIT_SUCCESS;
}