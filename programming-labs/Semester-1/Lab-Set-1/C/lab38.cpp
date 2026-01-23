#include <stdio.h>

int main()
{
    int a, b, c, max, min;

    printf("Enter three numbers:\n ");
    scanf("%d %d %d", &a, &b, &c);

    /* Finding largest number */
    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    /* Finding smallest number */
    if (a <= b && a <= c)
        min = a;
    else if (b <= a && b <= c)
        min = b;
    else
        min = c;

    printf("Largest number = %d", max);
    if (max % 2 == 0)
        printf(" (Even)\n");
    else
        printf(" (Odd)\n");

    printf("Smallest number = %d", min);
    if (min % 2 == 0)
        printf(" (Even)");
    else
        printf(" (Odd)");

    return 0;
}

