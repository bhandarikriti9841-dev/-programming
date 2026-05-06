// to illustrate the use of double pointer 
#include <stdio.h>
int main()
{
    int a = 5;
    int *p;
    int **dp;

    p = &a;
    dp = &p;

    printf("Value of a = %d\n", a);
    printf("Value using double pointer = %d\n", **dp);

    return 0;
}
