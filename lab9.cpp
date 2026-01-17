#include <stdio.h>
#define PI 3.14

int main()
{
    float r, area, c;
    printf("Enter radius:\n ");
    scanf("%f", &r);

    area = PI * r * r;
    c = 2 * PI * r;

    printf("Area of circle = %.2f\n", area);
    printf("Circumference of circle = %.2f", c);
    return 0;
}

