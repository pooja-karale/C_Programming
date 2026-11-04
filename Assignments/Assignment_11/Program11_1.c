#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  RangeDisplay
//  Input        :  Two Integers
//  Output       :  None
//  Description  :  Display all numbers from starting
//                 point to ending point.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

 void RangeDisplay(int iStart,int iEnd)
 {
    int i = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(i=iStart; i<=iEnd; i++)
    {
       printf("%d\t",i);
    }
 }
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point :\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}