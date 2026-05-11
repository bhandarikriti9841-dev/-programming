/*to demonstrate dynamic memory allocation 
	i.e. mall0c(), calloc(), realloc(), and free()*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p, *q;
	p= (int*) malloc(3*sizeof(int));
	q= (int*) calloc(3,sizeof(int));
	p= (int*) realloc(p,5 *sizeof(int));
	free(p);
	free(q);
	printf("Memory Functions executed.\n");
	return 0;
}
