#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(){
  int f,fd,len,lens;
  char buf[64] = "hello world!";
  char bufs[1024] = "\0";
  f = open("./hello.text",O_WRONLY|O_CREAT,0666);

  len = write(f,buf,64);
  printf("%s  ********\n",buf);

  fd = open("./hello.text",O_RDONLY);

  lens = read(fd,bufs,1024);
  printf("%s  ++++++++\n",bufs);


  int close(int f);
  return 0;
}
