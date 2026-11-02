#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  Pattern  
//  Input        :  Integer 
//  Output       :  None
//  Description  :  Display $ and * symbols N times
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////
void Pattern(int iNo)
{
    int i = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(i <= iNo)
    {
        printf("$\t*\t");
        i++;
    }

    printf("\n");
}

int main()
{
    int iValue =  0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
