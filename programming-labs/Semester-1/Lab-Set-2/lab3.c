//To print cube of even and square of odd numbers between 1 to 20

#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=20;i++){
        if(i%2==0)
            printf("%d -> Even\tCube = %d\n",i,i*i*i);
        else
            printf("%d -> Odd\tSquare = %d\n",i,i*i);
    }
    return 0;
}
