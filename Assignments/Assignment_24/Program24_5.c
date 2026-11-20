#include<stdio.h>
#include<stdlib.h>


////////////////////////////////////////////////////////////////
//
//  Function Name : StrRevX
//  Input         : String
//  Output        : Nothing
//  Description   : It is used to reverse string in place.
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }
}


int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified String is %s",arr);

    return EXIT_SUCCESS;
}
