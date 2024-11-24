/*
   START 
      Accept the total marks
      Accept the obtained marks
      calculate the percentage as (obtained / total) * 100
      Display the calculated percentage
    STOP
*/

#include <stdio.h>
float CalculatedPercentage(int iObtained, int iTotal)
{
    float fPercentage = 0.0f;
    fPercentage = ((float)iObtained / (float)iTotal) * 100;
    return fPercentage;

}

int main()
{

    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Enter the Obtained Mark :\n");
    scanf("%d",&iValue1);

    printf("Enter the Total Mark :\n");
    scanf("%d",&iValue2);

    fResult = CalculatedPercentage(iValue1, iValue2);

   printf("Your Percentage is : %f\n",fResult);
    return 0;
}