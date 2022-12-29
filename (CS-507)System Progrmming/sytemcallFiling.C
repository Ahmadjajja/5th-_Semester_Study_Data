/*
#include<stdio.h> 
#include<fcntl.h> 
#include<errno.h> 
extern int errno; 

int main() 
{      
    // if file does not have in directory  
    // then file foo.txt is created. 

    int fd = open("foo.txt", O_RDONLY);  
      
    printf("fd = %d \n", fd); 
      
    if (fd ==-1) 
    { 
        // print which type of error have in a code 
        printf("Error Number % d \n ", errno);  
          
        // print program detail "Success or failure" 
        perror("Reason of Error in Porgram ");                  
    } 
    return 0; 
} */

***********************************************************
/*
#include<stdio.h> 
#include <fcntl.h> 
#include <string.h> 
#include <sys/types.h>
#include <sys/stat.h>
int main() 
{ 






int sz=0;
 
  char *buff[1000];
  
  int fd = open("a.txt", O_WRONLY | O_CREAT | O_TRUNC |S_IREAD); 

	printf("This is my FD %d \n",fd);

  if (fd < 0) 
  { 
      
    printf("Error in file opening \n" );

	exit(0);
  } 
  
//int write(file_descriptor, buffer_pointer, transfer_size)

  sz = write(fd, "Writing Filing with system call  \n",20); .

  
  printf("\n File writing done with size %d \n" ,sz); 

 //  int read(file_descriptor, buffer_pointer, transfer_size)

	fd = open("a.txt", O_RDONLY);

	int rsize= read(fd, &buff,10);

  printf("\n data readed from File is size of %d \n and Data Readed ===   %s \n",rsize, buff); 

perror("Erro is ");

  
  close(fd); 
getchar();


return 0;


} */

**************************************************************

     #include <stdio.h>
     //#include <cstdio.h>
     #include <stdlib.h>
     #include <sys/types.h>        // defines types used by sys/stat.h //
     #include <sys/stat.h>         //defines S_IREAD & S_IWRITE       //

     int main()
     {
        int fd;
        fd = creat("datafile.dat", S_IREAD | S_IWRITE);

        if (fd == -1)
           printf("Error in opening datafile.dat\n");
        else
           {
           printf("datafile.dat opened for read/write access\n");
           printf("datafile.dat is currently empty\n");
           }

        close(fd);

        exit (0);
     }
/*
*****************************************************************

#include <stdio.h>
     #include <fcntl.h>
     #include <sys/types.h>
     #include <sys/stat.h>

     int main()
     {
        int fd;

        fd = open("foo.bar",O_WRONLY | O_CREAT, S_IREAD | S_IWRITE );

        if (fd == -1)
           {
           perror("foo.bar");
           exit (1);
           }

        close(1);         // close standard output  //
        dup(fd);       // fd will be duplicated into standard out's slot //
        close(fd);        // close the extra slot //
        printf("Hello, world!\n");    // should go to file foo.bar //
        exit (0);         // exit() will close the files //
     }
*/
/*
*****************************************************************

#include<stdio.h> 
#include <fcntl.h> 
int main() 
{ 
  int fd, sz; 
  char *c = (char *) calloc(100, sizeof(char)); 
  
  fd = open("foo.txt", O_RDONLY); 
  if (fd < 0) { perror("r1"); exit(1); } 
  
  sz = read(fd, c, 10); 
  printf("called read(% d, c, 10).  returned that"
         " %d bytes  were read.\n", fd, sz); 
  c[sz] = '\0'; 
  printf("Those bytes are as follows: % s\n", c); 
} 
*/
