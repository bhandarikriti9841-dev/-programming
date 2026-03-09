//to demonstrate String Initialization in C.

#include<stdio.h>
void main()
{
    char str1[] = "Hello";
    char str2[] = {'W','o','r','l','d','\0'};

    printf("String 1 = %s\n", str1);
    printf("String 2 = %s", str2);
}
