// Conditional Operators4
#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int x;
    printf("Enter a Number: ");
    scanf("%d", &x);
    x > 0 ? printf("Positive Number") : printf("Negative Number");
    return 0;
}
