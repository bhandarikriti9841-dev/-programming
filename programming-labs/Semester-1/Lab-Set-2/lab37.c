//function with arguments and return type.

#include <stdio.h>
int sum(int, int);   // function declaration

int main()
{
    int a = 50, b = 20;
    int result;

    result = sum(a, b);   // function call

    printf("Sum = %d", result);
}

int sum(int x, int y)   // function definition
{
    int s;
    s = x + y;

    return s;
}
