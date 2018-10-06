#include <stdio.h>
int main()
{
    int a, b, sum;

    scanf("%d", &a); //Inter a integer number
    scanf("%d", b); // Here & is not put intentionally to see what happens if & is not used as a address location.

    sum = a + b;   //Instruction of adding this two number

    printf("Sum is: %d\n", sum);  //Print result of Addition
    return 0;
}
