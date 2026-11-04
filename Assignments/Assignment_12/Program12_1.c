#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  DisplayDigits
//  Input        :  Integer
//  Output       :  None
//  Description  :  Display all digits of the given
//                  number in reverse order.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}