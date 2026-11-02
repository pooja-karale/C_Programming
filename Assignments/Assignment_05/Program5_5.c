#include<stdio.h>
#include<stdlib.h>

void CheackCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Uppercase Alphabet");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Lowercase Alphabet");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter a Character: ");
    scanf("%c",&cValue);

    CheackCharacterType(cValue);

    return EXIT_SUCCESS;
}