//to create a file and write text one character at a time until Enter key is pressed
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter text: ");

    while((ch = getchar()) != '\n')
    {
        fputc(ch, fp);
    }

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}
