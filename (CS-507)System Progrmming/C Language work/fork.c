#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h> 

int main(int argc, char *argv[]) // first argument(argc) tells about how many elements are in array(argv).
{
    // int x;
    //printf("%d",getpid());
    //printf("\nHello world from parent process");
    if (fork() == 0)
    {
        /* code */
        sleep(6);
        printf("\ncode from child process\n");
        
    }
    else
    {
        sleep(5);
        /* code */
        printf("\ncode from parent process\n");
    
    }
    
    //printf("hello world from child process");
    return 0;
}
