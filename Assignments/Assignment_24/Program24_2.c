#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : CountChar
//  Input         : String, Character
//  Output        : Integer
//  Description   : It is used to count the frequency of
//                  a given character in a string.
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str == ch)
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
    char cValue;
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :");
    scanf(" %c",&cValue);


    iRet =  CountChar(arr,cValue);

    printf("Character frequency is %d",iRet);

    return EXIT_SUCCESS;
}
