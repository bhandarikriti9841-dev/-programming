//to separate odd and even numbers into odd.txt and even.txt

#include <stdio.h>

int main()
{
    FILE *data, *odd, *even;
    int n, num, i;

    data = fopen("data.txt", "w");

    if(data == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("How many numbers? ");
    scanf("%d", &n);

    printf("Enter numbers:\n");

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        fprintf(data, "%d\n", num);
    }

    fclose(data);

    data = fopen("data.txt", "r");
    odd = fopen("odd.txt", "w");
    even = fopen("even.txt", "w");

    while(fscanf(data, "%d", &num) != EOF)
    {
        if(num % 2 == 0)
        {
            fprintf(even, "%d\n", num);
        }
        else
        {
            fprintf(odd, "%d\n", num);
        }
    }

    fclose(data);
    fclose(odd);
    fclose(even);

    printf("Odd and even numbers separated successfully.");

    return 0;
}
