/*to find greater number among two number
 using the return statement functions.*/
 
#include<stdio.h>
int greater(int,int);
void main()
{
    int a,b,g;

    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);

    g=greater(a,b);

    printf("Greater number = %d",g);
}

int greater(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
