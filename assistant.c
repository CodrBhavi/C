#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <process.h>
int main(int argc, char const *argv[])
{
    /* code */
    char name[128];
    char reply_3[128];
    char reply_2[128];
    char reply_1[128];
    printf("\tJarvis wants to know your name: ", name);
    scanf("%s", &name);
    printf("\t\nHello %s!! I am Jarvis your Assitant!!");
    printf("\t\nReply: ", reply_1);
    scanf("%s", &reply_1);

    printf("\t\nWhat can i do for you? ");
    printf("\t\nReply: ", reply_2);
    scanf("%s", reply_2);
    printf("\t\nI am written in C Language!!");
    printf("\t\nNice to meet you %s!!", name);
    printf("\t\nThanks for giving me your time!!");
    void exit(int status);
    return 0;
}
