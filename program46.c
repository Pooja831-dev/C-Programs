#include <stdio.h>
#include <stdbool.h>

bool CheckDivisible(int iNo)
{

    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
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
        printf("%d is Divisible by 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is Not Divisible by 3 and 5\n",iValue);
    }

    return 0;
}