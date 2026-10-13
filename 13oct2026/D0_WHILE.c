#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    do{
     printf("you're eligible to vote:");
    }while(age>=10);
}