#include <stdio.h>

int main()
{
    int a, b, sum, diff, mul, div, mod;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
	sum=a+b;
	diff=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
    printf("Sum = %d\n",sum);
    printf("Difference = %d\n",diff);
    printf("Product = %d\n",mul);
    printf("Quotient = %d\n",div);
    printf("Remainder = %d",mod);

    return 0;
}

