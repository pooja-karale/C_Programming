#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  FhtoCs
//  Input        :  Float (Fahrenheit)
//  Output       :  Double (Celsius)
//  Description  :  Convert temperature from Fahrenheit to Celsius
//  Date         :  30/10/2026
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * (5.0/9.0);
}


int main()
{
    float fValue =  0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");    scanf("%f",&fValue);

    dRet =FhtoCs(fValue);

    printf("Temperature in Celsius is : %.2f\n", dRet);
    
    return EXIT_SUCCESS;
} 