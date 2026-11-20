#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Character
//  Output        : Decimal, Octal and Hexadecimal values
//  Description   : It is used to display the decimal, octal
//                  and hexadecimal representation of the
//                  given character.
//
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////


void Display(char ch)
{
    printf("Decimal : %d\n", ch);

    printf("Octal : %04o\n", ch);

    printf("Hexadecimal : %#04X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}