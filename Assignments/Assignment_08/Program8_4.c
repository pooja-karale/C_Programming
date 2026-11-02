#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  Table
//  Input        :  Integer 
//  Output       :  None
//  Description  :  Display the multiplication table of a given number
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void Table(int iNo)
{
    int i = 0;

    for(i = 1; i <= 10; i++)
    {
        printf("%d\t",iNo * i);
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