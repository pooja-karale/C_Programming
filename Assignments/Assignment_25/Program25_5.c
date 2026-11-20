#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : DisplaySchedule
//  Input         : Character
//  Output        : Display Exam Schedule
//  Description   : It is used to display the exam schedule
//                  according to the given division.
//
//  Date          : 20/11/2026
//  Author        : Karale Pooja Subhash
//
////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0


typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    if(chDiv == 65 || chDiv == 97)
    {
        printf("Your Exam at 7 AM ");
    }
    
    else if(chDiv == 66 || chDiv == 98)
    {
        printf("Your Exam at 8.30 AM ");
    }

    else if(chDiv == 67 || chDiv == 99)
    {
        printf("Your Exam at 9.20 AM ");
    }

    else if(chDiv == 68 || chDiv == 100)
    {
        printf("Your Exam at 10.30 AM ");
    }

    else
    {
        printf("Invalid Division ");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Division :");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}