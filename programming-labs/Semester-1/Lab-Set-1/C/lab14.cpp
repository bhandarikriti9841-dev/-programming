#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 100)
        printf("Number lies between 1 and 100");
    else
        printf("Number does not lie between 1 and 100");

    return 0;
}

