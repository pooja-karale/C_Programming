#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  Pattern
//  Input        :  Two Integers
//  Output       :  None
//  Description  :  Display even numbers in odd rows
//                  and odd numbers in even rows.
//  Date         :  18/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
   int i = 0;
   int j = 0;
   int iCnt = 1;

   for(i = 1; i<= iRow; i++)
   {

     if(i % 2 == 0)
            {
                iCnt = 1;
            }
            else
            {
                iCnt = 2;
                    }
                for(j = 1; j <= iCol; j++)
                {
                printf("%d\t",iCnt);
                iCnt = iCnt + 2;
                }
                printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}