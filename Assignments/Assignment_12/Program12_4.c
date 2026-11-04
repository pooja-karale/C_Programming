#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  CountFour
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  Count the frequency of digit 4
//                  in the given number.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}