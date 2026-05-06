#include <stdio.h>

void modify(int *p)
{
    *p = *p + 10;
}

int main()
{
    int a = 5;

    modify(&a);

    printf("Updated value = %d", a);

    return 0;
}
