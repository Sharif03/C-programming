
#include <stdio.h>
int main()
{
    int num1;
    int num2=0;
    int result;

    printf("Please enter a number:  \n");
    scanf("%d", &num1);

    //printf("Please enter another number:  \n");
    //scanf("%d", &num2);

    result = num1 + num2;
    printf("%d + %d = %d \n", num1, num2, result);

    result = num1 - num2;
    printf("%d - %d = %d \n", num1, num2, result);

    result = num1 * num2;
    printf("%d * %d = %d \n", num1, num2, result);

    result = num1 / num2;
    printf("%d / %d = %d \n", num1, num2, result);

    return 0;
}
