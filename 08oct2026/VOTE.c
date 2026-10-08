#include<stdio.h>
int main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    (age>=18)? printf("your'e eligible to vote"):printf("your'e not eligible to vote");
    return 0;
    }