#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name: ");
    scanf("%[^'\n']d",Name);

    printf("Your name is: %s",Name);

    return 0;
}
