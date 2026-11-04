#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name:  Percentage
//  Input        :  Two Integers (Total Marks,
//                  Obtained Marks)
//  Output       :  Float
//  Description  :  Calculate the percentage of
//                  obtained marks.
//  Date         :  04/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
    float fper = 0.0f;

    if(iTotal == 0)
    {
        return 0.0f;
    }

    fper= ((float)iObtained /iTotal) * 100;
    return fper;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks :");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks :");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("percentage is : %.2f%%",fRet);

    return EXIT_SUCCESS;
}