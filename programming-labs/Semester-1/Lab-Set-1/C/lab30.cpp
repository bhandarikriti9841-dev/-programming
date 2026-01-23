#include <stdio.h>

int main()
{
    float income, tax = 0;
    int married;
    char gender;

    printf("Enter income, marital status (1=Married,0=Unmarried) and gender:\n ");
    scanf("%f%d %c", &income, &married, &gender);

    if (married)
    {
        if (income <= 450000)
            tax = income * 0.01;
        else if (income <= 550000)
            tax = 4500 + (income - 450000) * 0.10;
        else if (income <= 750000)
            tax = 14500 + (income - 550000) * 0.20;
        else if (income <= 1300000)
            tax = 54500 + (income - 750000) * 0.30;
        else
            tax = 219500 + (income - 1300000) * 0.35;
    }
    else
    {
        if (income <= 400000)
            tax = income * 0.01;
        else if (income <= 500000)
            tax = 4000 + (income - 400000) * 0.10;
        else if (income <= 750000)
            tax = 14000 + (income - 500000) * 0.20;
        else if (income <= 1300000)
            tax = 64000 + (income - 750000) * 0.30;
        else
            tax = 229000 + (income - 1300000) * 0.35;
    }

    if (gender == 'F' || gender == 'f')
        tax = tax * 0.90;

    printf("Tax = %.2f", tax);
    return 0;
}

