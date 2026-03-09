//function with no arguments and return type.

#include <stdio.h>
int sum();   // function declaration

void main()
{
    int result;

    result = sum();   // function call

    printf("Sum = %d", result);
}

int sum()   // function definition
{
    int a = 10, b = 20;
    return a + b;
}
