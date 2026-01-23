#include <stdio.h>

int main()
{
    int a, b, i, sum = 0;
    printf("Enter two numbers:\n ");
    scanf("%d%d", &a, &b);

    for (i = a; i <= b; i++)
        if (i % 2 == 0)
            sum += i;

    printf("Sum of even numbers = %d", sum);
    return 0;
}

