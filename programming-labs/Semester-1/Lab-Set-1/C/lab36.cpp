#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;
    printf("Enter a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4 * a * c;
    r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);

    printf("Roots = %.2f and %.2f", r1, r2);
    return 0;
}

