#include <stdio.h>
#define PI 3.14

int main()
{
    float r, h, s;
    printf("Enter radius and height: ");
    scanf("%f%f", &r, &h);

    s = 2 * PI * r * (r + h);
    printf("Total Surface Area = %.2f", s);
    return 0;
}

