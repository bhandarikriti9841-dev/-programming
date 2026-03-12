//To calculate the power of a number using a loop structure.

#include<stdio.h>
void main()
{
    int base, power, i, result=1;

    printf("Enter base and power:\n ");
    scanf("%d%d",&base,&power);

    for(i=1;i<=power;i++)
        result = result * base;

    printf("Result = %d", result);
}
