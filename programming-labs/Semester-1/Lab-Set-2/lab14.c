//to copy elements from one array to another.

#include<stdio.h>
void main()
{
    int a[100],b[100],n,i;

    printf("Enter number of elements:\n ");
    scanf("%d",&n);
	printf("Enter values:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        b[i]=a[i];

    printf("Copied array:\n");

    for(i=0;i<n;i++)
        printf("%d ",b[i]);
}
