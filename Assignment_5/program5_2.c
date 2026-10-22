#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(((iYear % 400) == 0) || ((iYear % 4) == 0) && (!(iYear % 100) == 0))
    {
        printf("Leap year");
    }
    else if (iYear <= 0 )
    {
        printf("Invalid year");
    }
    else
    {
        printf("Not a leap year");
    }

    
}
int main()
{
    int iyear = 0;
    

    printf("Enter a Year : ");
    scanf("%d", &iyear);

    CheckLeapYear(iyear);

    return EXIT_SUCCESS;
}