#include<stdio.h>
#include<stdlib.h>

void DisplayGrades(float fMarks)
{
    if (fMarks > 100 || fMarks < 0 )
    {
        printf("Invalid marks");
    }
    else if(fMarks >=90)
    {
        printf("Grade A");
    }
    else if (fMarks>= 75 && fMarks < 90 )
    {
        printf("Grade B");
    }
    else if (fMarks>= 60 && fMarks < 75 )
    {
        printf("Grade C");
    }
    else if (fMarks>= 40 && fMarks < 60 )
    {
        printf("Grade B");
    }
    else
    {
        printf("Fail");
    }

    
}
int main()
{
    float fmarks = 0.0f;


    printf("Enter marks : ");
    scanf("%f", &fmarks);

    DisplayGrades(fmarks);

    return EXIT_SUCCESS;
}