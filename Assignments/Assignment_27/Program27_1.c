#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhite
//  Input         : String
//  Output        : Number of white spaces
//  Description   : It is used to count white spaces
//                  from a given string.
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt = 0; 

    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);
    
    printf("%d",iRet);

    return EXIT_SUCCESS;
}