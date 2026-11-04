#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  RangeDisplayEven
//  Input        :  Two Integers
//  Output       :  None
//  Description  :  Display all even numbers from
//                 starting point to ending point.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

 void RangeDisplayEven(int iStart,int iEnd)
 {
    int i = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(i=iStart; i<=iEnd; i++)
    {
        if(i % 2 == 0)
        {
           printf("%d\t",i);
        }
    }
 }
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point :\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}