//to demonstrate dangling pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p=(int*)malloc(sizeof(int));
	*p=10;
	printf("Value = %d\n",*p);
	free(p);//p is now dangling pointer
	printf("Value after free = %d\n",*p);
	printf("Dangling pointer created.\n");
	return 0;
} 
