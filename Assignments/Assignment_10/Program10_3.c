#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  KMtoMeter
//  Input        :  Integer (Kilometer)
//  Output       :  Integer (Meter)
//  Description  :  Convert distance from Kilometer to Meter
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////
int KMtoMeter(int iNo)
{
    return (iNo * 1000);
}


int main()
{
    int iValue =  0, iRet = 0;

    printf("Enter distance in kilometer : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is : %d\n", iRet);

    return EXIT_SUCCESS;
} 