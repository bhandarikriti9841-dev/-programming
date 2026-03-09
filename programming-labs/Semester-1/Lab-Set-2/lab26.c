//to find the length of a string.

#include<stdio.h>
#include<string.h>

void main()
{
    char str[50];
    int len;

    printf("Enter a string: \n");
    gets(str);

    len = strlen(str);

    printf("Length of string = %d", len);
}
