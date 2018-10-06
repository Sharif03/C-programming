#include <stdio.h>
int main()
{
    int num1, num2, result;
    char ch;

    printf("Please enter a number:  \n");
    scanf("%d", &num1);

    printf("Please enter another number:  \n");
    scanf("%d", &num2);

    result = num1 + num2;
    ch = '+';
    printf("%d %c %d = %d \n", num1, ch, num2, result);

    result = num1 - num2;
    ch = '-';
    printf("%d %c %d = %d \n", num1, ch, num2, result);

    result = num1 * num2;
    ch = '*';
    printf("%d %c %d = %d \n", num1, ch, num2, result);

    result = num1 / num2;
    ch = '/';
    printf("%d %c %d = %d \n", num1, ch, num2, result);

    return 0;
}

