#include <unistd.h>  
#include <fcntl.h>
#include <stdio.h> 
#include <stdlib.h>

char	buf1[] = "abcdefghij";
char	buf2[] = "ABCDEFGHIJ";

int main() {
  int fd;

  if ( (fd = creat("file.hole", 0777)) < 0)
  { perror("file.hole"); exit(-1); }
  
  printf("fileDescriptor: %d", fd);

 if (write(fd, "Ahmad is Parizaad nO", 20) != 20) // offset now = 10 
    perror("buf1");
    
  printf("\nfileDescriptor2: %d\n", fd);
  printf("%d", 3);
 
    if (lseek(3, 5, SEEK_SET) == -1) // offset now = 40       // Confusion here
    perror("lseek");
    //printf(".....%ld", lseek(fd, 10, 15));

  if (write(fd, "Ahmad is Parizaad nO", 20) != 10) // offset now = 50 
  perror("buf2"); 

  return 0;
}
