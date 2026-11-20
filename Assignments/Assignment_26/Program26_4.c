#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSpecial
//  Input         : Character
//  Output        : BOOL
//  Description   : It is used to check whether the given
//                  character is a special character or not.
//
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' ||
       ch == '$' || ch == '%' || ch == '^' ||
       ch == '&' || ch == '*')
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character :");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special character");
    }
    else
    {
        printf("It is not a Special character");
    }

    return EXIT_SUCCESS;
}