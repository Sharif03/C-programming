#include <stdio.h>
int main()
{
    int a, b, sum; //  Intentionally we use int though our value is Double.

    scanf("%lf", &a); //Inter a Double number
    scanf("%lf", &b); //Inter a Double number

    sum = a + b;     //Instruction of adding this two number

    printf("Sum is: %d\n", sum);  //Print result of Addition
    return 0;
}
