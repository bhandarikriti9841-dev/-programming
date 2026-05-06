//to find customer with highest and lowest balance.
#include <stdio.h>

struct customer
{
    char name[20];
    int acc;
    float balance;
};

int main()
{
    struct customer c[5];
    int i, max = 0, min = 0;
 printf("Enter account number, name, bank balance for 3 employees:\n");
    for(i = 0; i < 5; i++)
   
        scanf("%s %d %f", c[i].name, &c[i].acc, &c[i].balance);
	printf("User Details:\n");
    for(i = 1; i < 5; i++)
    {
        if(c[i].balance > c[max].balance)
            max = i;
        if(c[i].balance < c[min].balance)
            min = i;
    }

    printf("Highest: %s %.2f\n", c[max].name, c[max].balance);
    printf("Lowest: %s %.2f", c[min].name, c[min].balance);

    return 0;
}
