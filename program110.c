#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Nummber:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}