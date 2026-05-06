#include <stdio.h>
int main()
{
    int arr[3] = {10, 20, 30};
    int *p[3];
    int i;

    for(i = 0; i < 3; i++)
        p[i] = &arr[i];

    for(i = 0; i < 3; i++)
        printf("%d ", *p[i]);

    return 0;
}
