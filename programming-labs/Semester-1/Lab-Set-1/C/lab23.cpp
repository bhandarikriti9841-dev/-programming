#include <stdio.h>

int main()
{
    int a;
    float b;
    printf("Enter integer: ");
    scanf("%d", &a);

    b = (float)a;
    printf("Float value = %.2f", b);
    return 0;
}

