//To swap two numbers using call by value.
#include<stdio.h>

void swap(int x,int y)
{
    int temp;

    temp=x;
    x=y;
    y=temp;

   printf("During swapping: x = %d\t y = %d\n",x,y);
}

int main()
{
    int a,b;

    printf("Enter numbers: ");
    scanf("%d%d",&a,&b);
	printf("Before swap: x = %d\t y = %d\n",a,b);
    swap(a,b);

    printf("After swap: x = %d\t y = %d\n",a,b);

    return 0;
}
