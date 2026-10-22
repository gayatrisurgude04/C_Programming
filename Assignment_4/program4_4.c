#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge >= 18)
    {
        printf("Eligible for voting");
    }
    else if (iAge < 0)
    {
        printf("Invalid age");
    }
    else
    {
        printf( "Not eligible for voting");
    }

    
}
int main()
{
    int iage = 0;
    
    printf("Enter your age : ");
    scanf("%d", &iage);

    CheckVotingEligibility(iage);

    return EXIT_SUCCESS;
}