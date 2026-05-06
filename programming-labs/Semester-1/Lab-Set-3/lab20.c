//to sort employee records in ascending order of name
#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    char address[30];
    float salary;
};

int main()
{
    struct employee e[3], temp;
    int i, j;
	printf("Enter Name, Address, Salary for 3 employees:\n");
    for(i = 0; i < 3; i++)
        scanf("%s %s %f\n", e[i].name, e[i].address, &e[i].salary);

    for(i = 0; i < 2; i++)
    {
        for(j = i + 1; j < 3; j++)
        {
            if(strcmp(e[i].name, e[j].name) > 0)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
	printf("Details:\n");
    for(i = 0; i < 3; i++)
        printf("%s %s %.2f\n", e[i].name, e[i].address, e[i].salary);

    return 0;
}
