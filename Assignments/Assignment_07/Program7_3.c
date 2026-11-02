#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  Display
//  Input        :  Integer 
//  Output       :  None
//  Description  :  Display numbers from -N to +N
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    for(i = -iNo; i <= iNo; i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    
}
int main()
{
    int iValue =  0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}