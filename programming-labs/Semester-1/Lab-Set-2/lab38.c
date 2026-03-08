//To determine the smallest element in an array using function.

#include<stdio.h>
int minimum(int arr[],int n)
{
    int i,min;
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}

int main()
{
    int arr[50],n,i;
    printf("Enter size: ");
    scanf("%d",&n);
	printf("Enter values:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Minimum value = %d",minimum(arr,n));

    return 0;
}
