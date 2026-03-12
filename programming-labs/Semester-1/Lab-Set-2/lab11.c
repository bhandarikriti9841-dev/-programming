//to search an element using linear search.

#include<stdio.h>
void main()
{
    int a[100],n,i,key;

    printf("Enter number of elements:\n ");
    scanf("%d",&n);
	printf("Enter values:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter element to search:\n ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("Element found at position %d",i+1);
            break;
        }
    }
}
