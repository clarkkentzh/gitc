#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>

int main(int argc, char const *argv[]) {
  DIR * dir;
  struct dirent * di;
  if((dir = opendir("a")) == NULL){
    perror("fail to open dir!");
    return -1;
  }
  while((di = readdir(dir)) != NULL){
    if(di->d_name[0] != '.'){
      printf("%s\n",di->d_name);
    }
  }
  closedir(dir);
  return 0;
}
