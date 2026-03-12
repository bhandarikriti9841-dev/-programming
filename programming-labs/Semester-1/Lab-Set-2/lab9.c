//to find sum, average, largest and smallest element in an array.

#include<stdio.h>
void main()
{
    int a[100],n,i,sum=0,largest,smallest;

    printf("Enter number of elements:\n ");
    scanf("%d",&n);
	printf("Enter values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    largest=smallest=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
            largest=a[i];

        if(a[i]<smallest)
            smallest=a[i];
    }

    printf("Sum = %d\n",sum);
    printf("Average = %f\n",(float)sum/n);
    printf("Largest = %d\n",largest);
    printf("Smallest = %d",smallest);
}
