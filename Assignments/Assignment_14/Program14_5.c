#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  SumFactDiff
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  Calculate the difference between
//                  the sum of factors and the sum of
//                  non-factors of the given number.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

int SumFactDiff(int iNo)
{
    int i = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iSumFact = iSumFact + i;
        }
        else
        {
            iSumNonFact = iSumNonFact + i;
        }
    }
    return (iSumFact - iSumNonFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumFactDiff(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;;
}