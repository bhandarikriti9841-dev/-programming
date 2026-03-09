//function with arguments and no return type.

#include <stdio.h>
void sum(int, int);   // function declaration

void main()
{
    int a = 20, b = 30;

    sum(a, b);   // function call with arguments
}

void sum(int x, int y)   // function definition
{
    int s;
    s = x + y;

    printf("Sum = %d", s);
}
