#include<stdio.h>
#include<stdlib.h>
#include<stdbool.H>

///////////////////////////////////////////////////
//
//  Function Name:  ChkGreater
//  Input        :  Integer
//  Output       :  BOOL (TRUE / FALSE)
//  Description  :  Check whether the given number
//                  is greater than 100 or not.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number :");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS;

}