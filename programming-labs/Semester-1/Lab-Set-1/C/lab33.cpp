#include <stdio.h>

int main()
{
    float x, y;
    char op;

    printf("Enter two numbers:\n ");
    scanf("%f %f", &x, &y);

    printf("Enter operator:\n ");
    getchar();          // clears newline
    op = getchar();     // unformatted input

    if (op == '+')
        printf("Result = %.2f", x + y);
    else if (op == '-')
        printf("Result = %.2f", x - y);
    else if (op == '*')
        printf("Result = %.2f", x * y);
    else if (op == '/')
        printf("Result = %.2f", x / y);
    else
        printf("Invalid operator");

    return 0;
}

