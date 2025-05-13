#include <stdio.h>
int main()
{
    float inch;
    printf("Enter the length in inches:");
    scanf("%f", &inch);
    printf("The length in centimeters is: %.2f", inch * 2.54);
    return 0;
}