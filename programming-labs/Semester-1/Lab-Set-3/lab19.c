//to demonstrate nested structure
#include <stdio.h>

struct date
{
    int d, m, y;
};

struct student
{
    char name[20];
    struct date dob;
};

int main()
{
    struct student s;
	printf("Enter student name and dob(yyyy/mm/dd):\n");
    scanf("%s %d %d %d", s.name, &s.dob.d, &s.dob.m, &s.dob.y);
	printf("Student details:\n");
    printf("Name:%s\n DOB:%d-%d-%d", s.name, s.dob.d, s.dob.m, s.dob.y);

    return 0;
}
