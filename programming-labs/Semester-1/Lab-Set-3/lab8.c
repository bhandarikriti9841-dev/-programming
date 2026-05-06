#include <stdio.h>

int main()
{
    char *str[] = {"Apple", "Banana", "Mango"};

    int i;
    for(i = 0; i < 3; i++)
        printf("%s\n", str[i]);

    return 0;
}
