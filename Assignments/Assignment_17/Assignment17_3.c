#include<stdio.h>

void Pattern(int iRow, int iColumns)
{
    int i = 0, j = 0;
    int iNum = 0;
    char ch = '\0';

    for(i = 1; i <= iRow;i++)
    {
        if((i % 2) == 0)
        {
            for(j = 1, iNum = 1; j <= iColumns;j++,iNum++)
            {
                    printf("%d\t",iNum);
            }
        }

        else
        {
            for(j = 1, ch = 'a'; j <= iColumns;j++,ch++)
            { 
                printf("%c\t",ch);
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