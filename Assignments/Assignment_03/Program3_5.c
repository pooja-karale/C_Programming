#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0
BOOL chkValue(char cValue)
{
    if(cValue == 'a' ||cValue == 'e' ||cValue == 'i' ||cValue == 'o' ||cValue == 'u'||
       cValue == 'A' ||cValue == 'E' ||cValue == 'I' ||cValue == 'O' ||cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character :\n");
    scanf("%C",&cValue);

    bRet = chkValue(cValue);
    
    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    
    return 0;
}