#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//  
//  Function Name:  DollarToINR
//  Input        :  Integer (USD)
//  Output       :  Integer (INR)
//  Description  :  Convert USD into INR using fixed rate of 70
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

int DollarToINR(int iNo)
{
   int iAns = 0;

   iAns = iNo * 70;

   return iAns;
    
}

int main()
{
    int iValue =  0, iRet = 0;

    printf("Enter Number of USD :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;
}