//to find the sum of two integer using Calling a function through main()

#include<stdio.h>
int sum(int,int);
void main()
{
    int a,b,result;

    printf("Enter two numbers:\n ");
    scanf("%d%d",&a,&b);

    result=sum(a,b);

    printf("Sum = %d",result);
}

int sum(int x,int y)
{
    return x+y;
}
