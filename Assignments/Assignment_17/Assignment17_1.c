#include<stdio.h>

void Pattern(int iRow, int iColumns)
{
    int i = 0, j = 0;
    int iNum = 0;

    for(i = 1,iNum = 1; i <= iRow;i++)
    {
        for(j = 1; j <= iColumns;j++,iNum++)
        {
            if(iNum > 9)
            {
                iNum = 1;
                printf("%d\t",iNum);
            }
            else
            {
                printf("%d\t",iNum);
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
