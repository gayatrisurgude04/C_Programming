#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive Number");
    }
    else if (iValue < 0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Zero");
    }
    
}
int main()
{
    int ivalue = 0;

    printf("Enter number : ");
    scanf("%d",&ivalue);

    CheckNumber(ivalue);

    return EXIT_SUCCESS;
}