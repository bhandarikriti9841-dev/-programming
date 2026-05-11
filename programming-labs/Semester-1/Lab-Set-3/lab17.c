//to store data using structure
#include <stdio.h>

struct employee
{
    char name[20];
    float salary;
    int age;
    char dept[20];
};

int main()
{
    struct employee e[20];
    int i,n;
    float totalSal = 0;
    int totalAge = 0;
	
	printf("How many employees are there?:\t");
	scanf("%d",&n);
    for(i = 0; i <n; i++)
    {	printf("Enter records for employee %d:\n",i+1);
    
		printf("Name:\t");
		scanf("%s",e[i].name);
		printf("Salary:\t");
		scanf("%f",&e[i].salary); 
		printf("Age:\t");
		scanf("%d",&e[i].age);
		printf("Department:\t");
		scanf("%s",e[i].dept);
}
	printf("\n");
	printf("Name\tSalary\tAge\tDepartment\n");
		for (i=0;i<n;i++)
	printf("%s\t\t%.2f\t\t%d\t\t%s\n",e[i].name,e[i].salary, e[i].age, e[i].dept);
	for (i=0;i<n;i++)
{        totalSal += e[i].salary;
        totalAge += e[i].age;
}

    printf("Average Salary = %.2f\n", totalSal/n);
    printf("Average Age = %d", totalAge/n);

    return 0;
}
