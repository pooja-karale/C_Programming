#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Input         : String
//  Output        : BOOL
//  Description   : It is used to check whether the given
//                  string contains at least one vowel or not.
//
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'A' ||
           *str == 'e' || *str == 'E' ||
           *str == 'i' || *str == 'I' ||
           *str == 'o' || *str == 'O' ||
           *str == 'u' || *str == 'U')
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter String : ");
    scanf("%19[^\n]", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("String Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return EXIT_SUCCESS;
}