#include <stdio.h>

struct student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct student s;

    printf("Enter name:\n ");
    scanf("%s", s.name);

    printf("Enter age:\n ");
    scanf("%d", &s.age);

    printf("Enter marks:\n ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f", s.marks);

    return 0;
}
