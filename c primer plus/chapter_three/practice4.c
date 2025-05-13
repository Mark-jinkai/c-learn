#include <stdio.h>
int main()
{
    float value;
    printf("Enter a floating-point value:");
    scanf("%f", &value);
    printf("fixed-point notation: %f\n", value);
    printf("exponential notatilon: %e\n", value);
    printf("p notation: %g\n", value);
    return 0;
}