//to store N student records into file and display on screen

#include <stdio.h>

struct student
{
    char name[50];
    char email[50];
    char phone[20];
    int rollno;
};

int main()
{
    FILE *fp;
    struct student s;
    int n, i;

    fp = fopen("student.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter Name: ");
        scanf("%s", s.name);

        printf("Enter Email: ");
        scanf("%s", s.email);

        printf("Enter Phone: ");
        scanf("%s", s.phone);

        printf("Enter Roll No: ");
        scanf("%d", &s.rollno);

        fprintf(fp, "%s %s %s %d\n",
                s.name, s.email, s.phone, s.rollno);
    }

    fclose(fp);

    fp = fopen("student.txt", "r");

    printf("\nStored Student Records:\n");

    while(fscanf(fp, "%s %s %s %d",
                 s.name, s.email, s.phone, &s.rollno) != EOF)
    {
        printf("%s %s %s %d\n",
               s.name, s.email, s.phone, s.rollno);
    }

    fclose(fp);

    return 0;
}
