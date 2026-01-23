#include <stdio.h>

int main()
{
    char name[20], address[30];
    int age;
    float weight, height;

    gets(name);
    gets(address);
    scanf("%d%f%f", &age, &weight, &height);

    puts(name);
    puts(address);
    printf("%d %.2f %.2f", age, weight, height);
    return 0;
}

