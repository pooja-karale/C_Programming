#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  SquareMeter
//  Input        :  Integer (Area in Square Feet)
//  Output       :  Double (Area in Square Meter)
//  Description  :  Convert Square Feet into Square Meter
//  Date         :  01/11/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dAns = 0.0;

    dAns = iValue * 0.0929;

    return dAns;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    
    printf("Area in square Meter : %lf\n",dRet);

    return EXIT_SUCCESS;

}