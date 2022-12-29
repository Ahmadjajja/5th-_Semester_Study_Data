// 1

/*#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
 
   printf("PID of example.c = %d\n", getpid());

    execlp("ls", "ls", "-a", "/", (char *) 0);

    printf("Back to example.c");

    getchar();

    return 0;
}*/

// 2

/* #include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 
int main() 
{ 
        //A null terminated array of character  
        //pointers 
        		// Below line is very intersting(./fork note this portion)
        char *args[]={"./fork",NULL}; // calling binary or excuteable file Name EXEC
        execv(args[0],args); 
      
        //All statements are ignored after execvp() call as this whole             //point to be noted
        //process(execDemo.c) is replaced by another process (EXEC.c) 
        
        printf("Ending-----"); 
      
    return 0; 
}*/

// 3

/* #include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    printf("PID of example.c = %d\n", getpid());
    char *const args[] = {"fork", "C", "Programming", NULL};
    execv(args[0], args);
    printf("Back to example.c");
    return 0;
}  */

// 4

/* #include <unistd.h> // execlp()
#include <stdio.h>  // perror()
#include <stdlib.h> // EXIT_SUCCESS, EXIT_FAILURE

int main(void) {
  execlp("man", "ls", "ls", "-a", NULL);
  perror("Return from execlp() not expected");
  exit(EXIT_FAILURE);
} */


// 5


#include <unistd.h> // execvp()
#include <stdio.h>  // perror()
#include <stdlib.h> // EXIT_SUCCESS, EXIT_FAILURE

int main(void) {
  char *const cmd[] = {"ls", "-l", NULL};
  execvp(cmd[0], cmd);
  perror("Return from execvp() not expected");
  exit(EXIT_FAILURE);
}     








































