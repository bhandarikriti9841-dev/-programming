//to use array of structure
#include<stdio.h>
struct student {
	int roll;
	char name[20];
	float marks;
	char remarks[20];
};
int main()
{
	struct student s[5];
	int i;
	
	for (i=0;i<5;i++)
	{
		printf("Enter details for student %d:\n",i+1);
		printf("Roll no.:\t");  
		scanf("%d",&s[i].roll);
		printf("Name:\t");
		scanf("%s",s[i].name);
		printf("Marks:\t");
		scanf("%f",&s[i].marks); 
		printf("Remarks:\t");
		scanf("%s",s[i].remarks); 
	}
	printf("\n");
	printf("Roll no.\tStudent Name\tMarks\tRemarks\n");
		for (i=0;i<5;i++)
	{
		printf("%d\t\t%s\t\t%.2f\t\t%s\n",s[i].roll,s[i].name, s[i].marks, s[i].remarks);
}
return 0;
}
