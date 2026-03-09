//to read name of n students and sort them in alphabet order.

#include<stdio.h>
#include<string.h>
void main()
{
    char name[20][50], temp[50];
    int n,i,j;

    printf("Enter number of students:\n");
    scanf("%d",&n);

    printf("Enter names:\n");

    for(i=0;i<n;i++)
        scanf("%s",name[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

    printf("Names in alphabetical order:\n");

    for(i=0;i<n;i++)
        printf("%s\n",name[i]);
}
