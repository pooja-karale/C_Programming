#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  OddDisplay
//  Input        :  Integer 
//  Output       :  None
//  Description  :  Display odd numbers from 1 to N
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t",i);
        }
    }
    printf("\n");
}
int main()
{
    int iValue =  0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}