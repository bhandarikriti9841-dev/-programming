//to convert lowercase to uppercase and uppercase to lowercase using string functions.

#include<stdio.h>
#include<ctype.h>
void main()
{
    char str[100];
    int i;

    printf("Enter a string:\n ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    }

    printf("Converted string = %s", str);
}
