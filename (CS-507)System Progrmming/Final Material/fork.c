#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h> 
  
void example(int x) 
{ 
	//printf("x: ", x);
    // child process because return value zero 
    if (fork() == 0) 
	{
        printf("process ID of child! %d\n", getpid());

         execlp("ls", "ls", "-a", "/", AAAA);   // will return root directories and  files 

        printf("Hello from Child!\n"); 
	}
      // parent process because return value non-zero. 
    else
	{
        printf("Hello from Parent!\n"); 
	}
} 
int main() 
{ 
 printf("process ID of parent! %d\n", getpid());


	example(5);


//printf("again process ID of parent! %d\n", getpid());
    return 0; 
}
