 #include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  NonFact
//  Input        :  Integer
//  Output       :  None
//  Description  :  Display all non-factors of the
//                  given number.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
       if(iNo % iCnt != 0)
       {
          printf("%d\t",iCnt); 
       }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}