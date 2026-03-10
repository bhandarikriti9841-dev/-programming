//to implement selection sort.

#include <stdio.h>
int main() {
    int i, j, n, min_idx, temp;
    int arr[50];

    printf("Enter number of elements:\n ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    // Selection sort
    for(i=0; i<n-1; i++) {
        min_idx = i;
        for(j=i+1; j<n; j++)
            if(arr[j] < arr[min_idx])
                min_idx = j;
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    printf("Sorted array:\n");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}
