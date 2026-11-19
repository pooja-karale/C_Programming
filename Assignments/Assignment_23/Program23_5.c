#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhite
//  Input         : String
//  Output        : Number of white spaces
//  Description   : It is used to count white spaces
//                  from a given string.
//  Date          : 19/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCnt = 0; 

    while (*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt  = iCnt + 1;
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

    iRet = CountWhite(arr);
    
    printf("%d",iRet);

    return EXIT_SUCCESS;
}