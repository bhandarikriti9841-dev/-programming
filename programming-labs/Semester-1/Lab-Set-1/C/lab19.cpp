#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:\n ");
    scanf("%d", &n);
    printf("%s", (n % 2 == 0) ? "Even" : "Odd");
    return 0;
}

