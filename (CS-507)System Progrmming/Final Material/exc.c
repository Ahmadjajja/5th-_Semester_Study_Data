/* #include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])

{
 
   printf("PID of example.c = %d\n", getpid());

    execlp("ls", "ls", "-al", "/media/ahmad/New Volume/University Study Data/5th semester study data/(CS-507)System Progrmming/Final Material", NULL);

    printf("Back to example.c");

    getchar();

    return 0;
} */

//****************************************************

/* #include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 
int main() 
{ 

	printf("PID of example.c = %d\n", getpid());	

        //A null terminated array of character  
        //pointers 
        char *args[]={"./fork",NULL}; // calling binary or excuteable file Name EXEC

        execv(args[0],args); 
      
        //All statements are ignored after execvp() call as this whole  
        //process(execDemo.c) is replaced by another process (EXEC.c) 
        
        printf("Ending-----");
      
    return 0; 
}  */




/*
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])

{
 

   //printf("PID of example.c = %d\n", getpid());
   
   char *env[] = {"TERM=vt5","PATH=/bin:/usr/bin",NULL };


    execle("cat", "cat","file.hole", (char *) 0, env);

    //execl("/usr/bin/ls","ls", "-la", NULL );    //confusion

    //execl("AAA","AAA", NULL);

    //printf("Back to my parent process file ");

    getchar();

    return 0;
} */






