#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    int sum;

    sum = *p + *q;

    printf("Sum = %d", sum);

    return 0;
}
