#include <stdio.h>

void Display(int ptr[])
{
    printf("Values of the Array are : \n");
    
    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);
    
}

int main()
{
    int Arr[4];
    int iCnt = 0;

    printf("Please enter the Values :\n");

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr);

    return 0;
}