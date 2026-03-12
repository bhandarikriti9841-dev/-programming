//to check whether a number is palindrome or not.

#include<stdio.h>
void main()
{
    int n,temp,rev=0,rem;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(temp==rev)
        printf("Number is Palindrome");
    else
        printf("Number is Not Palindrome");
}
