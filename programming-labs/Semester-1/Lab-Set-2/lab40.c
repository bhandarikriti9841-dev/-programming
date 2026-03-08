//To swap two numbers using call by references.
#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("During swapping: x = %d\t y = %d\n",a,b);
}

int main()
{
    int a,b;

    printf("Enter two numbers:\n ");
    scanf("%d%d",&a,&b);
	printf("Before swap: x = %d\t y = %d\n",a,b);
    swap(&a,&b);
	printf("After swap: x = %d\t y = %d\n",a,b);
	return 0;
}
