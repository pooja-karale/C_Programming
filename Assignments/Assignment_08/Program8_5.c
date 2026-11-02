#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  Table
//  Input        :  Integer 
//  Output       :  None
//  Description  :  Display the multiplication table in reverse order
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void Table(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 10; i >= 1; i--)
    {
        printf("%d\t", iNo * i); 
    }
}
int main()
{
    int iValue =  0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}