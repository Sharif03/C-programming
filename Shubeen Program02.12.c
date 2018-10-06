#include <stdio.h>
int main()
{
    char ch;  // char is used for character type value.
    printf("Enter the first letter of your name:  ");

    scanf("%c", &ch);  // %c is used for taking character type value.
    printf("The first letter of your name is:  %c\n", ch);
    return 0;
}
