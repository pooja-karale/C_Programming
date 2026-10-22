#include<stdio.h>
#include<stdlib.h>

void CalculateBonus( float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if( fSalary <= 0 ||  iYears <= 0)
    {
        printf("Invald");
    }
    else if(iYears > 10)
    {
        fBonus = 15.0f;
    }
    else if(iYears > 5)
    {
        fBonus = 10.0f;
    }
    else 
    {
        fBonus = 5.0f;
    }

    fBonus = fSalary *(fBonus / 100);
    printf("Bonus = %.2f",fBonus);

}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and Years : ");
    scanf("%f %d",&fSalary, & iYears);

    CalculateBonus(fSalary,iYears);

    return EXIT_SUCCESS;

}