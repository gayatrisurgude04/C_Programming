#include<stdio.h>

void Pattern(int iRow, int iColumns)
{
    int i = 0, j = 0;
    int iPNum = 0,iNNum;
    

    for(i = 1; i <= iRow;i++)
    {
        if((i % 2) == 0)
        {
            for(j = 1, iNNum = -1; j <= iColumns;j++,iNNum--)
            {
                    printf("%d\t",iNNum);
            }
        }

        else
        {
            for(j = 1, iPNum = 1; j <= iColumns;j++,iPNum++)
            { 
                printf("%d\t",iPNum);
            }
        }
            printf("\n\n");
        

    }
} 

int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}