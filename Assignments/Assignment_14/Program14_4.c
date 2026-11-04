 #include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  NonFact
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  sum of all non-factors
//                  of the given number.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

int NonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
       if(iNo % iCnt != 0)
       {
          iSum = iSum + iCnt; 
       }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = NonFact(iValue);
    
    printf("%d",iRet);

    return EXIT_SUCCESS;
}