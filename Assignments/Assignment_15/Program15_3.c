#include<stdio.h>
#include<stdlib.h>
#include<stdbool.H>

///////////////////////////////////////////////////
//
//  Function Name:  ChkEqual
//  Input        :  Two Integers
//  Output       :  BOOL (TRUE / FALSE)
//  Description  :  Check whether the given two
//                  numbers are equal or not.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////


typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter two numbers :");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return EXIT_SUCCESS;

}