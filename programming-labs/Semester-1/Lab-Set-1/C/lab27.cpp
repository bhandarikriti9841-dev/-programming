#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5, per;
    printf("Enter marks of five subjects: ");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);

    per = (m1 + m2 + m3 + m4 + m5) / 5;

    if (per >= 80)
        printf("Distinction");
    else if (per >= 60)
        printf("First Division");
    else if (per >= 40)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}

