#include<stdio.h>

void DisplaySchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Your exam at 7am");
    }
    else if (ch == 'B' || ch == 'b')
    {
        printf("Your exam at 8.30am");
    }
    else if (ch == 'C' || ch == 'c')
    {
        printf("Your exam at 9.20am");
    }
    else if (ch == 'D' || ch == 'd')
    {
        printf("Your exam at 10.30am");
    }
    
}

int main()
{
    char cValue = '\0';
    
    printf("Enter your division: ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}