#include <stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0, iSum= 0;

    if(iNo < 0)        //If input is negative
    {
        iNo = -iNo;       //Convert it to positive
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;

}

int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summition of Digits are :%d",iRet);

    return 0;
}