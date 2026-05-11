//to open a file and copy all its content to another file

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("college.txt", "r");

    if(fp1 == NULL)
    {
        printf("Source file cannot be opened.");
        return 1;
    }

    fp2 = fopen("target.txt", "w");

    if(fp2 == NULL)
    {
        printf("Target file cannot be opened.");
        return 1;
    }

    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully.");

    return 0;
}
