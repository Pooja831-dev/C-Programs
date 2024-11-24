#include <stdio.h>

int main()
{
    int Arr[4];
    int iCnt = 0;

    printf("Please Enter The Values :\n");
    
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d\n",&Arr[iCnt]);
    }

     printf("Value of Array :\n");
     
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);

    }

   return 0; 
}