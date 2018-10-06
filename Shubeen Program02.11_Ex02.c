#include <stdio.h>
int main()
{
    double a, b, sum;

    scanf("%lf", &a); //Inter a Double number
    scanf("%lf", &b); //Inter a Double number

    sum = a + b;     //Instruction of adding this two number

    printf("Sum is: %0.2lf\n", sum);  //Print result of Addition
    return 0;
}

