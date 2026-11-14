#include<stdio.h>

void DisplayASCII()
{
    int icnt = 0;

    for(icnt = 0 ; icnt <= 255; icnt++)
    {
        printf("Decimal: %d\n",icnt);
        printf("Octal: %o\n",icnt);
        printf("Hexadecimal: %x\n",icnt);
        printf("Character: %c\n",icnt);

        printf("\n");

    }
}

int main()
{
    DisplayASCII();

    return 0;
}
