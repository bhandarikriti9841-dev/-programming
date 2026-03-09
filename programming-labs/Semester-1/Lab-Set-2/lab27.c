//to concatenate (combine/join) any two string together.

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[50], str2[50];

    printf("Enter first string:\n ");
    gets(str1);

    printf("Enter second string:\n");
    gets(str2);

    strcat(str1, str2);

    printf("Concatenated String = %s", str1);
}
