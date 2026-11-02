#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//   
//  Function Name:  CircleArea
//  Input        :  Float (Radius)
//  Output       :  Double (Area)
//  Description  :  Calculate the area of a circle
//  Date         :  30/10/2026 
//  Author       :  Karale Pooja Subhash
//
///////////////////////////////////////////////////

double  CircleArea(float fRadius)
{
   double dArea = 0.0;

   dArea = 3.14 * fRadius * fRadius;

   return dArea;

}
int main()
{
    float fValue =  0.0f;
    double dRet = 0.0f;

    printf("Enter radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of the circle is : %.4lf", dRet);

    return EXIT_SUCCESS;
} 