#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst >= iSecond && iFirst >= iThird )
    {
        printf("%d is greatest",iFirst);
    }
    else if (iSecond >= iFirst && iSecond >= iThird)
    {
        printf("%d is greatest",iSecond);
    }
    else
    {
        printf("%d is greatest",iThird);
    }

    
}
int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
    int ivalue3 = 0;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &ivalue1, &ivalue2, &ivalue3);

    FindGreatest(ivalue1,ivalue2,ivalue3);

    return EXIT_SUCCESS;
}