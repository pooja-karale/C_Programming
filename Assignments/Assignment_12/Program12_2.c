#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////
//
//  Function Name:  ChkZero
//  Input        :  Integer
//  Output       :  Boolean
//  Description  :  Check whether the given number
//                  contains zero or not.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

bool ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return true;
        }
      
        iNo = iNo / 10;
    }

    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no zero");
    }

    return EXIT_SUCCESS;
}