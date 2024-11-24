#include <stdio.h>
#include <stdlib.h>

void AdditionEvenOdd(int Arr[], int iSize)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
          if(Arr[iCnt] % 2 == 0)
          {
            iSum1 = iSum1 + Arr[iCnt];
          }
          else
          {
             iSum2 = iSum2 + Arr[iCnt];
          }
    }

       printf("Addition of Even elements : %d\n",iSum1);
       printf("Addition of Odd elements : %d\n",iSum2);    
}

int main()
{
   int *ptr = NULL;
   int iLength = 0, iCnt = 0, iRet = 0;

   printf("Enter number of elements : \n");
   scanf("%d",&iLength);

   ptr = (int *)malloc(iLength * sizeof(int));

   printf("Enter the Elements : \n");

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }  

   AdditionEvenOdd(ptr, iLength);
    
    free(ptr);

    return 0;
}
