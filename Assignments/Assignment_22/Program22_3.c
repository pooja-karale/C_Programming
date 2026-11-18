#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  Pattern
//  Input        :  One Integer
//  Output       :  None
//  Description  :  Display numbers in ascending
//                 order from 1 to the given number,
//                 followed by '*'.
//  Date         :  18/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void Pattern(int iNo)
{
  int iCnt = 0;

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("%d\t*\t",iCnt);
  }
}

int main()
{

    int iValue = 0;

    printf("Enter number of elements :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}