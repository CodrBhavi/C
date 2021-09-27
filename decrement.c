// This Program will take a number from user then, It will decrement the number & display the output
#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);
    a = a - 1;
    printf("%d", a);
    return 0;
}
