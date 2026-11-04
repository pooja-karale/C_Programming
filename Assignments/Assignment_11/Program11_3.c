#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  RangeSum
//  Input        :  Two Integers
//  Output       :  Integer
//  Description  :  Return the addition of all numbers
//                 from starting point to ending point.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int i = 0;
    int iSum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid range\n");
        return -1;
    }

    for(i = iStart; i <= iEnd; i++)
    {
        iSum = iSum + i;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point :\n");
    scanf("%d", &iValue1);

    printf("Enter Ending point :\n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        return EXIT_SUCCESS;
    }

    printf("Addition is %d\n", iRet);

    return EXIT_SUCCESS;
}
