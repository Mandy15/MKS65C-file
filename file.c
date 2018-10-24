#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  int fd = open("file.txt", O_RDONLY);
  printf("Open file.txt: %d\n", fd);
  char *buf1 = malloc(20);
  printf("Read %zd bytes in file.txt:\n%s", read(fd, buf1, 20), buf1);
  printf("Close file.txt: %d\n\n", close(fd));

  fd = open("file.txt", O_RDWR);
  printf("Open file.txt: %d\n", fd);
  char *wr = "beep\nBeep\nBEEP";
  printf("Write %zd bytes in file.txt:\n", write(fd, wr, strlen(wr)));
  printf("Close file.txt: %d\n\n", close(fd));

  fd = open("file.txt", O_RDONLY);
  printf("Open file.txt: %d\n", fd);
  char *buf2 = malloc(20);
  printf("Read %zd bytes in file.txt:\n%s", read(fd, buf2, 20), buf2);
  printf("Close file.txt: %d\n", close(fd));
}
