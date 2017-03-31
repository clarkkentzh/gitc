#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <dirent.h>
#include <fcntl.h>

int main(){
  DIR * dir;
  struct dirent * di;
  dir = opendir("a");
  if(dir == NULL){
    printf("fail to opendir!");
    return -1;
  }
  di = readdir(dir);
  printf("%s\n",di->d_name);

  return 0;
}
