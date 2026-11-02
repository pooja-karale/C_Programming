#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  OddFactorial
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  Calculate the product of odd numbers from 1 to N
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++ )
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue =  0, iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}