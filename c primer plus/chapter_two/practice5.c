#include<stdio.h>
void one_three();


int main()
{
    one_three();
    return 0;
}

void one_three()
{
    printf("starting now:\n");
    printf("one\n");
    two();
    printf("three\n");
    printf("done!\n");
}

void two()
{
    printf("two\n");
}