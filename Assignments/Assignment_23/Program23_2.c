#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Struprx
//  Input         : String
//  Output        : String
//  Description   : It is used to convert all lowercase
//                  characters of a string into uppercase.
//  Date          : 19/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

void Struprx(char *str)
{

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    Struprx(arr);

    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}