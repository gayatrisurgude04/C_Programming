#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if((iValue % 5) == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf( "Not divisible by 5");
    }

    
}
int main()
{
    int ivalue = 0;
    
    printf("Enter a number : ");
    scanf("%d", &ivalue);

    CheckDivisibility(ivalue);

    return EXIT_SUCCESS;
}