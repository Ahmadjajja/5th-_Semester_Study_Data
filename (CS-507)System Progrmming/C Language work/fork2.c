#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h> 
  

void example() 
{ 
    // child process because return value zero 
    printf("\nparent id : %d\n", getpid());
    if (fork() == 0) 
	{
        printf("\nprocess ID of child! %d\n", getpid());

         execlp("ls", "ls", "-a", "/", (char *) 0);
         //this replaces the child process with the ne program file(ls program file)
        printf("\nHello from Child!\n"); 
	}
      // parent process because return value non-zero. 
    else
	{
        printf("Hello from Parent!\n"); 
	}
} 
int main() 
{ 
 //printf("process ID of parent! %d\n", getpid());


example();


//printf("again process ID of parent! %d\n", getpid());
    return 0; 
}
