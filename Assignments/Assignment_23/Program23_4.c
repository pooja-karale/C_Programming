#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Input         : String
//  Output        : Display digits from string
//  Description   : It is used to display all numeric
//                  characters from a given string.
//  Date          : 19/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
           printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}