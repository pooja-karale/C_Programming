#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  Factorial
//  Input        :  Integer 
//  Output       :  Integer
//  Description  :  Calculate the factorial of a given number
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

int Factorial(int iNo)
{
   int iFact = 1;
   int i = 0;

   if(iNo < 0)
   {
    iNo = -iNo;
   }

   for(i = 1; i <= iNo; i++)
   {
    iFact = iFact * i;
   }
   return iFact;
}
int main()
{
    int iValue =  0, iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}