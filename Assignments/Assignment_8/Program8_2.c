#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  Display
//  Input        :  Integer 
//  Output       :  None
//  Description  :  Display the number in words (0 to 9)
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo >= 10)
    {
        printf("Invalid Number");
    }
    else if(iNo == 0)
    {
        printf("Zero");
    }
    else if(iNo == 1)
    {
        printf("One");
    }
     else if(iNo == 2)
    {
        printf("Two");
    }
     else if(iNo == 3)
    {
        printf("Three");
    }
     else if(iNo == 4)
    {
        printf("Four");
    }
     else if(iNo == 5)
    {
        printf("Five");
    }
     else if(iNo == 6)
    {
        printf("Six");
    }
     else if(iNo == 7)
    {
        printf("Seven");
    }
     else if(iNo == 8)
    {
        printf("Eight");
    }
     else if(iNo == 9)
    {
        printf("Nine");
    }

   
}
int main()
{
    int iValue =  0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}