#include <stdio.h>

int main()
{
    int Arr[4];
    int iCnt = 0, iSum = 0;

    printf("Please Enter The Values :\n");
    
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);

        iSum = iSum + Arr[iCnt];
    }

    printf("Addition of Array Elements = %d",iSum);

     

   return 0; 
}