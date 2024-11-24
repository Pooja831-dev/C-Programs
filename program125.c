#include <stdio.h>

void Display(int iNo)
{
    int iCnt;
    char ch = 'a';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;       
    }
        printf("\n");
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}