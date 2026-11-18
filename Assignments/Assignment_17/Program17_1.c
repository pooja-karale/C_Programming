#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  Pattern
//  Input        :  Two Integers
//  Output       :  None
//  Description  :  Display numbers from 1 to 9
//                  repeatedly in a pattern.
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
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iCnt);
            iCnt++;

            if(iCnt == 10)
            {
                iCnt = 1;
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
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}