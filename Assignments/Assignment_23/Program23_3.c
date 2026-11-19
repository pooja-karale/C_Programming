#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Strtogglex
//  Input         : String
//  Output        : String
//  Description   : It is used to toggle the case of all
//                  alphabetic characters in a string.
//  Date          : 19/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

void Strtogglex(char *str)
{

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if (*str >= 'a' && *str <='z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    Strtogglex(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}