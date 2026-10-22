#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1,int iSide2,int iSide3)
{
    
    if((iSide1 <= 0) || (iSide2 <= 0) || (iSide3 <= 0))
    {
        printf("Invalid Triangle");
    }
    else if (((iSide1 + iSide2) > iSide3) && ((iSide1 + iSide3) > iSide2) && ((iSide2 + iSide3) > iSide1))
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    
}

int main()
{
    int iside1 = 0, iside2 = 0, iside3 = 0;


    printf("Enter three sides : ");
    scanf("%d %d %d",&iside1,&iside2,&iside3);

    CheckTriangle(iside1,iside2,iside3);

    return EXIT_SUCCESS;
}