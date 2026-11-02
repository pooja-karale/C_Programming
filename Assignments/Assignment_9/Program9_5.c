#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  FactorialDiff
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  Calculate the difference between even and odd factorials
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int i = 0;
    int iEvenFact = 1;
    int iOddFact = 1; 

     if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
        {
            iEvenFact =  iEvenFact * i;
        }
        else
        {
            iOddFact = iOddFact * i;
        }
    }
     return  (iEvenFact - iOddFact);
}
int main()
{
    int iValue =  0, iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return EXIT_SUCCESS;
}