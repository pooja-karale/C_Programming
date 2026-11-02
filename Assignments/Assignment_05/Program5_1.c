#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird )
{
    if(iFirst > iSecond || iFirst > iThird)
    {
        printf("%d is greater",iFirst);
    }
    else if(iSecond > iThird)
    {
        printf("%d is greater",iSecond);  
    }
    else
    {
        printf("%d is greater",iThird); 
    }
}
int main()
{
    int iValue1 = 0,  iValue2 = 0, iValue3 = 0;

    printf("Enter three Values :");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}