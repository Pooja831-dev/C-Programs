#include <stdio.h>

////////////////////////////////////////////////////////////////
// 
// Function Name : Addition
//  Description :  It is used to perform addition of 2 float values
//  Input :        Float, Float
//  Output :       Float
//  Author :       Pooja Balu Londhe
//  Date :         06/10/2024
//
////////////////////////////////////////////////////////////////


float Addition(float fValue1, float fValue2)
{
    float fAdd = 0.0f;                            //Local Variable for result
    fAdd = fValue1 + fValue2;                     //Business Logic
    return fAdd;
}
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
//   
// This applicatin is used to perform addition of 2 numbers  
//
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
int main()
{
   float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;     //Local variables for input

   printf("Enter first number :\n");                
   scanf("%f",&fNo1); 

   printf("Enter second number :\n");
   scanf("%f",&fNo2);

   fAns = Addition(fNo1, fNo2);                     //Function call

   printf("Addition is :%f\n",fAns);
   
    return 0;
}