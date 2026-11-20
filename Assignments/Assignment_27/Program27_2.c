#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : CountSmall
//  Input         : String
//  Output        : Number of Small Alphabets
//  Description   : It is used to count Small alphabets
//                  from a given string.
//
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCnt = 0; 

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(arr);
    
    printf("%d",iRet);

    return EXIT_SUCCESS;
}