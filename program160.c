#include <stdio.h>

void Display(char *str)
{
      int i = 0;
      printf("Entered String is : %s\n",str);

      for(i = 0; str[i] != '\0'; i++)
      {
        printf("%c\n",str[i]);
      }
}

int main()
{
    char Arr[30];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
    
}
