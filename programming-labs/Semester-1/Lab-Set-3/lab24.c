//to ask name and age of person and store it in record.txt

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("record.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d", age);

    fclose(fp);

    printf("Record stored successfully.");

    return 0;
}
