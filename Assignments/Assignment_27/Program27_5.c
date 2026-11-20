#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Input         : String
//  Output        : Reversed String
//  Description   : It is used to reverse the given string
//                  in place.
//
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }

    if(end == str)
    {
        return;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    printf("%s", arr);

    return EXIT_SUCCESS;
}