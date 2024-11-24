#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
          if(Arr[iCnt] % 2 == 0)
          {
            iCount++;
          }
    }

    return iCount;    
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

   iRet = CountEven(ptr, iLength);
   printf("Even Count : %d",iRet);
    
    free(ptr);

    return 0;
}
