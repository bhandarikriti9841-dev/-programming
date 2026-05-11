//to understand direct initialization of structure
#include<stdio.h>
struct student{
	char name[20];
	int age;
};
int main()
{
	struct student s ={"Ram", 21};
	printf("Name: %s\n",s.name);
	printf("Age: %d\n",s.age);
	return 0;
}
