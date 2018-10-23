#include<stdio.h>
#include <stdlib.h>
#include<fcntl.h>
// #include<sys/types.h>
// #include<sys/stat.h>
// #include<errno.h>

int main(){
  int fd = open("file.txt", O_RDONLY | O_CREAT);
  printf("Opened file.txt: %d\n", fd);

  char *buf = malloc(10);
  printf("Read %d bytes in file.txt:\n%s\n", read(fd, buf, 10), buf);

  // write();

  printf("Closed file.txt: %d\n", close(fd));
}
