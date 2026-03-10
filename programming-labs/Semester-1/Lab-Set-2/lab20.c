//to implement bubble sort.

#include <stdio.h>
int main() {
    int i, j, n, temp;
    int arr[50];

    printf("Enter number of elements: \n");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    // Bubble sort
    for(i=0; i<n-1; i++)
        for(j=0; j<n-i-1; j++)
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

    printf("Sorted array:\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}
