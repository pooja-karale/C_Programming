#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayASCII
//  Input         : Nothing
//  Output        : Displays ASCII Table
//  Description   : It is used to display ASCII values in
//                  Symbol, Decimal, Hexadecimal and Octal formats.
//
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%X\t\t%o\n",i,i,i,i);
    }
}
int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}