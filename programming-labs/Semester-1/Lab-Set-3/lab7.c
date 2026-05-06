#include <stdio.h>

int main()
{
    int a,b,c;
    int *p[3];
    printf("Enter any 3 numbers:\n");
    scanf("%d\t%d\t%d",&a,&b, &c);
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;

    printf("Entered numbers are:\n %d %d %d", *p[0], *p[1], *p[2]);

    return 0;
}
