//to create employees.txt and write employee details

#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    char post[50];
    float salary;
};

int main()
{
    FILE *fp;
    struct employee e;
    int i,n;

    fp = fopen("employees.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }
     printf("How many employees? ");
    scanf("%d", &n);
    

    for(i = 0; i < n; i++)
    {	printf("Enter details for employee %d:\n",i+1);
        printf("Enter ID:\t");
        scanf("%d", &e.id);

        printf("Enter Name:\t ");
        scanf("%s", e.name);

        printf("Enter Post:\t");
        scanf("%s", e.post);

        printf("Enter Salary:\t");
        scanf("%f", &e.salary);
}
printf("\n");
        fprintf(fp, "%d %s %s %.2f\n",
                e.id, e.name, e.post, e.salary);
    

    fclose(fp);

    printf("\nEmployee records stored successfully.");

    return 0;
}
