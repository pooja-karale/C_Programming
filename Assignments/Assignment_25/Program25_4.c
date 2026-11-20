#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSmall
//  Input         : Character
//  Output        : BOOL
//  Description   : It is used to check whether the given
//                  character is a small alphabet or not.
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if( ch >= 97 && ch <= 122)
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small Case character");
    }
    else
    {
        printf("It is not a Small Case character");
    }

    return EXIT_SUCCESS;
}