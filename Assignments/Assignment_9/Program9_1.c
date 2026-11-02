#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  Display
//  Input        :  Integer 
//  Output       :  None
//  Description  :  Display * and # symbols N times
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        printf("#\t");
    }
    
}
int main()
{
    int iValue =  0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}