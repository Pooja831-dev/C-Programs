#include <stdio.h>
#include <stdbool.h>

bool CheckDivisible(int iNo)
{
    int iResult = 0;
    iResult = iNo % 5;

    if(iResult == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bFlag = false;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bFlag = CheckDivisible(iValue);

    if(bFlag == true)
    {
        printf("%d is Divisible by 5\n",iValue);
    }
    else
    {
        printf("%d is Not Divisible by 5\n",iValue);
    }

    return 0;
}