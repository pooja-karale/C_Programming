#include<stdio.h>

void Display(int iNo, int frequency)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= frequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue = 0;
    int frequency = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    printf("Enter Frequency :");
    scanf("%d",&frequency);

    Display(iValue,frequency);

    return 0;

}