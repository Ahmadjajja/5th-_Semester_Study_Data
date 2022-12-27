#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> //atoi function is in stdlib headerfile.

int main(int argc, char *argv[]) // first argument(argc) tells about how many elements are in array(argv).
{
    // errno && successfull system call

    // int x;
    // printf("%d\n", 5);
    // printf("printf(): %d\n\n",printf("Ahmad is typing\t"));
    // printf("\nerrno: %d\n",errno);
    //    printf("\nHello world from parent process\n");
    //    fork();
    //    printf("\nhello world from child process\n");

    // creat() system call
    char *file_name;
    int mode;
    int creat("hello.txt", "r");

    return 0;
}
