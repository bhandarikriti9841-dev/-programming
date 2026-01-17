#include <stdio.h>
#define PI 3.14

int main()
{
    float r, area;
    printf("Enter radius: ");
    scanf("%f", &r);

    area = PI * r * r;
    printf("Area of circle = %.2f", area);
    return 0;
}

