
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  Pattern
//  Input        :  Two Integers
//  Output       :  None
//  Description  :  Display column numbers in
//                 descending order in each row.
//  Date         :  18/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}