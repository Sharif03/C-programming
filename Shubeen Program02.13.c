#include <stdio.h>
int main()
{
    char ch;   // char is used for character type value.
    printf("Enter the first letter of your name:  ");

    ch = getchar();  // instead using of scanf we can use getchar() function.
    printf("The first letter of your name is:  %c\n", ch);
    return 0;
}
