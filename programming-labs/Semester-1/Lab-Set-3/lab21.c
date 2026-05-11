//to write “I study BCA” to a file named bca.txt in write mode
#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("bca.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    fprintf(fp, "I study BCA");

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}
