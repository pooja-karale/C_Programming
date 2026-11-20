#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Input         : String
//  Output        : Difference between Small and Capital Alphabets
//  Description   : It is used to calculate the difference
//                  between the number of small and capital
//                  alphabets from a given string.
//
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

int Difference(char *str)
{ 
    int SmallCount = 0;
    int CapitalCount = 0;

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            SmallCount++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            CapitalCount++;
        }
        str++;
    }
    return  (SmallCount - CapitalCount);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    
    printf("%d",iRet);

    return EXIT_SUCCESS;
}