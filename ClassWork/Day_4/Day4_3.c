#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{

  printf("Factors of %d are : \n",iNo);

  int iCnt = 0;
  for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
      if((iNo % iCnt) == 0)
      {
        printf("%d\n",iCnt);
      }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    

    return EXIT_SUCCESS;
}

// Tome Complexity : O(N/2)