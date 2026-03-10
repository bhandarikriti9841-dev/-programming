//to perform matrix multiplication.

#include <stdio.h>
int main() {
    int i, j, k;
    int matrix1[10][10], matrix2[10][10], product[10][10];
    int r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix:\n ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: \n");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++)
            scanf("%d", &matrix2[i][j]);

    // Multiplying matrices
    for(i=0; i<r1; i++)
        for(j=0; j<c2; j++) {
            product[i][j] = 0;
            for(k=0; k<c1; k++)
                product[i][j] += matrix1[i][k] * matrix2[k][j];
        }

    printf("Product of matrices:\n");
    for(i=0; i<r1; i++) {
        for(j=0; j<c2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }
    return 0;
}
