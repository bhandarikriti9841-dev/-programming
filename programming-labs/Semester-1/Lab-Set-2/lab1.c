//patterns created using for-loop

#include <stdio.h>
int main() {
    int i,j,k;

    printf("Pattern (a)\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }

    printf("\nPattern (b)\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++)
            printf("%d ",i);
        printf("\n");
    }

    printf("\nPattern (c)\n");
    for(i=1;i<=5;i++){
        for(k=1;k<=5-i;k++)
            printf("  ");
        for(j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }

    printf("\nPattern (d)\n");
    for(i=1;i<=5;i++){
        for(k=1;k<=5-i;k++)
            printf("  ");
        for(j=i;j>=1;j--)
            printf("%d ",j);
        printf("\n");
    }

    printf("\nPattern (e)\n");
    for(i=1;i<=5;i++){
        for(k=1;k<=5-i;k++)
            printf("  ");
        for(j=i;j>=1;j--)
            printf("%d ",j);
        for(j=2;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }

    printf("\nPattern (f)\n");
    for(i=1;i<=5;i++){
        for(k=1;k<=5-i;k++)
            printf("  ");
        for(j=1;j<=2*i-1;j++)
            printf("%d ",i);
        printf("\n");
    }

    printf("\nPattern (g)\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++)
            printf("%d ",j*j);
        printf("\n");
    }

    printf("\nPattern (h)\n");
    for(i=1;i<=5;i++){
        for(j=0;j<i;j++)
            printf("%c ",'a'+j);
        printf("\n");
    }

    printf("\nPattern (i)\n");
    for(i=6;i>=1;i--){
        for(j=0;j<i;j++)
            printf("%c ",'A'+j);
        printf("\n");
    }

    return 0;
}
