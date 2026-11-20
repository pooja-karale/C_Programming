#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : FirstChar
//  Input         : String, Character
//  Output        : Integer
//  Description   : It is used to find the first occurrence
//                  of a character in a string.
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }
        str++;
        iCnt++;
      
    }  
    return -1;
  
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :");
    scanf(" %c",&cValue);


    iRet =  FirstChar(arr,cValue);

    printf("Character location is %d",iRet);

    return EXIT_SUCCESS;
}
