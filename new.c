// This Program will tell you the sum & difference of the number that you have told the compiler
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a Number for a: ");
    scanf("%d", &a);
    int b;
    printf("Enter a Number for b: ");
    scanf("%d", &b);
    printf("%d + %d = %d", a, b, a + b);
    printf("\n%d - %d = %d", a, b, a - b);
    float c;
    printf("\nEnter a Decimal Number for c: ");
    scanf("%f", &c);
    float d;
    printf("Enter a Decimal Number for d: ");
    scanf("%f", &d);
    printf("%f + %f = %lf", c, d, c + d);
    printf("\n%f - %f = %lf", c, d, c - d);
    return 0;
}