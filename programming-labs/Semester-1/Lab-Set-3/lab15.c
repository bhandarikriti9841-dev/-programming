//to understand decaration and usage of structure
#include<stdio.h>
struct book{
	char title[30];
	int price;
};
int main()
{
	struct book b;
	printf("Enter title and price of a book:\n");
	scanf("%s%d",b.title,&b.price);
	printf("Title:%s\n Price:%d", b.title, b.price);
	return 0;
}
