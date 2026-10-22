#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    

    if((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for admission");
    }
    else if ((fMarks <= 0 || fMarks >100) || iAge < 0)
    {
        printf("Invalid input");
    }
    else 
    {
        printf("Not eligible");
    }

    
}

int main()
{
    float fmarks = 0.0f;
    int iage = 0;


    printf("Enter marks and age : ");
    scanf("%f %d",&fmarks,&iage);

    CheckAdmission(fmarks,iage);

    return EXIT_SUCCESS;
}