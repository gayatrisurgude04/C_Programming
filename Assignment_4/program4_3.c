#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is greater",iFirst);
    }
    else if (iFirst == iSecond)
    {
        printf("Both numbers are equal");
    }
    else
    {
        printf( "%d is greater",iSecond);
    }

    
}
int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    printf("Enter two numbers : ");
    scanf("%d %d", &ivalue1, &ivalue2);

    FindGreater(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}