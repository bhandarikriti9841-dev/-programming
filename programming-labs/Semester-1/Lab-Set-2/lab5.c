//to calculate factorial of a number provided by user.

#include<stdio.h>
void main()
{
    int n,i,fact=1;

    printf("Enter a number:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        fact = fact * i;

    printf("Factorial = %d", fact);
}
