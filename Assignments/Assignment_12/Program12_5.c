#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  Count
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  Count the frequency digits which are
//                  less than 6 in the given number.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

int Count(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6 )
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}