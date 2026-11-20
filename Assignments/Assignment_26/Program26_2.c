#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Character
//  Output        : Modified Character
//  Description   : It is used to convert capital alphabet
//                  into small alphabet and vice versa.
//
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 65 && ch <= 90)
    {
        ch = ch + 32;
    }
    else if(ch >= 97 && ch <= 122)
    {
        ch = ch - 32;
    }
    printf("%c", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;;
}