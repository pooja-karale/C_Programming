#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  Number
//  Input        :  Integer 
//  Output       :  None
//  Description  :  Check whether the number is Small, Medium or Large
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small");
    }
    else if(iNo <= 100) 
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }

}
int main()
{
    int iValue =  0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}