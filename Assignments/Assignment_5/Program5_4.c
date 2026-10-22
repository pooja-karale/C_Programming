#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
     if((iValue % 3)== 0 && (iValue % 5)== 0)
    {
        printf("Divisible by Both");
    }
    else if((iValue % 3)== 0)
    {
        printf("Divisible by only 3");
    }
     else if((iValue % 5)== 0)
    {
        printf("Divisible by only 5");
    }
     else 
    {
        printf("Not Divisible by either");
    }
}

int main()

{

    int iValue = 0;

    printf("Enter a number: ");

    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;

}