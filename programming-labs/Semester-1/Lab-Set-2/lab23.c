/*To calculate the total price of bulbs 
based on quantity and individual prices.*/

#include <stdio.h>
int main() {
    float price[5], total = 0;
    int stock[5], i;

    for(i=0; i<5; i++) {
        printf("Enter price of bulb %d:\n ", i+1);
        scanf("%f", &price[i]);
        printf("Enter stock of bulb %d:\n ", i+1);
        scanf("%d", &stock[i]);
        total += price[i] * stock[i];
    }

    printf("Total price of all bulbs: %.2f\n", total);
    return 0;
}
