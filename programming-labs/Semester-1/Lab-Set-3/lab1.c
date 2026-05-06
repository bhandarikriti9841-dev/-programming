//to illustrate the use of pointer 
#include <stdio.h>
int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Value of a = %d\n", a);
    printf("Value using pointer address = %d\n", p);
	printf("Value using pointer = %d\n", *p);
    return 0;
}
