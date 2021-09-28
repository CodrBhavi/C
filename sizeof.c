// Finding how much byte a data type is consuming using sizeof() operator
#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int x;
    x = sizeof(x);
    printf("%d", x);
    return 0;
}
