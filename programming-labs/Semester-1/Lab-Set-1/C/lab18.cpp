#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter any two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("Largest= %d", (a > b) ? a : b);
    return 0;
}

