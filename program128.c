#include <stdio.h>

void Display(int iNo)
{
    int iCnt;
    char ch = 97;

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);       
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