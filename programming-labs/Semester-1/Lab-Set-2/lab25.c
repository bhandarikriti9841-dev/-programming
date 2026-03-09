//to read strings with blank space and without blank space.

#include<stdio.h>
void main()
{
    char str1[50], str2[50];

    printf("Enter string without space:\n ");
    scanf("%s", str1);

    printf("Enter string with space:\n");
    getchar();
    gets(str2);

    printf("Without space: %s\n", str1);
    printf("With space: %s", str2);
}
