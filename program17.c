/*
    START 
       Accept the percentage from the user
       If percentage are less than 40 then display FAIL
       And If it is greater than or equal 40 then display PASS
*/
#include <stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage > 100.0f)
    {
        printf("Invalid percentage, Please enter in the value in the range 0 to 100\n");
        return;
    }
    if(fPercentage >= 40.00f)
    {
        printf("You are PASS\n");
    }
    else
    {
        printf("You are FAIL\n");
    }
}
int main()
{

     float fValue = 0.0f;

     printf("Enter the Percentage :\n");
     scanf("%f",&fValue);
     
     DisplayResult(fValue);

    return 0;
}