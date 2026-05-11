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
    struct customer c[100];
    int i,n, max_index, min_index;
	float max = 0, min = 0;
    printf("How many customers?\t");
    scanf("%d",&n);
 
    for(i=0; i<n; i++)
    {
    	printf("Enter details for customer %d:\n",i+1);
   		printf("Enter account number:\t");
   		scanf("%d",&c[i].acc);
   		printf("Enter name:\t");
   		scanf("%s",c[i].name);
   		printf("Enter bank balance:\t");
   		scanf("%f",&c[i].balance);
	}
	max=c[0].balance;
	max_index = 0;
	min=c[0].balance;
	min_index=0;
    for(i=1;i<n;i++)
    {
        if(c[i].balance > max)
        {
            max = c[i].balance;
            max_index=i;
    	}
        if(c[i].balance < min)
        {
            min = c[i].balance;
            min_index=i;
        }
    }

    printf("\nHighest: %s %.2f\n", c[max_index].name, c[max_index].balance);
    printf("Lowest: %s %.2f", c[min_index].name, c[min_index].balance);

    return 0;
}
