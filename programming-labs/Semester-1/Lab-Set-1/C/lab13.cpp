#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if (a > b)
        printf("%d is greater number.", a);
    else if (a < b)
        printf("%d is greater number",b);
    else
        printf("Both numbers are equal");

    return 0;
}

