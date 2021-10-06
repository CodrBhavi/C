// System that will take input from user
#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    /* code */
    char name[25];
    char pass[8];
    printf("Username: ");
    scanf("%s", &name);
    printf("Password: ");
    scanf("%s", &pass);
    printf("%s", &name);
    printf("\n%s", &pass);
    return 0;
}
