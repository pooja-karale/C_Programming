#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Strlwrx
//  Input         : String
//  Output        : String
//  Description   : It is used to convert all uppercase
//                  characters of a string into lowercase.
//  Date          : 19/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

void Strlwrx(char *str)
{

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    Strlwrx(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}