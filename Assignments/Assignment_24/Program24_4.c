#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : LastChar
//  Input         : String, Character
//  Output        : Integer
//  Description   : It is used to find the last occurrence
//                  of a character in a string.
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }
        str++;
        iCnt++;
      
    }  
    return iPos;
  
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


    iRet =  LastChar(arr,cValue);

    printf("Character location is %d",iRet);

    return EXIT_SUCCESS;
}
