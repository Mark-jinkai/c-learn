#include<stdio.h>
int main(void)
{
    int age , days ;
    printf("Enter your age:");
    scanf("%d", &age);
    days = age * 365 ;
    printf("You are %d years old, which is equivalent to %d days.\n", age, days);
    return 0;
}