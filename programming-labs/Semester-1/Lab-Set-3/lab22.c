//to append “I study in college name, Address” to college.txt
#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("college.txt", "a");

    if(fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    fprintf(fp, "I study in Patan Multiple Campus, Patandhoka, Lalitpur");

    fclose(fp);

    printf("Data appended successfully.");

    return 0;
}
