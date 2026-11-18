#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  Pattern
//  Input        :  Two Integers
//  Output       :  None
//  Description  :  Display '#' when the sum of row
//                  and column numbers is greater
//                  than 5, otherwise display '*'.
//  Date         :  18/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j =1; j <= iCol; j++)
        {
            if(i + j > 5)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}