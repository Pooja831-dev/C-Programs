#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *ptr = NULL;
   int iLength = 0, iCnt = 0;

   printf("Enter number of elements : \n");
   scanf("%d",&iLength);

   ptr = (int *)malloc(iLength * sizeof(int));

   printf("Enter the Elements : \n");

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }  
    
    free(ptr);

    return 0;
}



/*
    Step 1 : Accept the number of elements from user
    Step 2 : Allocate that memory dynamically
    Step 3 : Accept the values and store into the dynamic memory
    Step 4 : Perforn the operations (Logic)
    Step 5 : Deallocate that memory
*/