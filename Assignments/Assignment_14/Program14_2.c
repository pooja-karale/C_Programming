 #include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  FactRev
//  Input        :  Integer
//  Output       :  None
//  Description  :  Display all factors of the given
//                  number in reverse order.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
       if(iNo % iCnt == 0)
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

    FactRev(iValue);

    return EXIT_SUCCESS;
}