# system函数
## 示例代码：
```sh
#include <stdlib.h> 
int system(const char *command);
功能： 就是执行一个命令
比如： system(" cp  file  newfile");完成文件拷贝.
```
## 编写:mycp命令
    
    1. 获取命令行参数。 $ ./mycp src obj
    2. 根据获取的命令行参数， 进行拼接成字符串。
    3. 使用system函数执行拼接成的字符串命令。
例如：
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char * argv[]){
    char cmd[100];

    if(argc == 3){
        //sprintf(cmd,"cp %s %s",argv[1],argv[2]);
        sprintf(cmd,"mv %s %s",argv[1],argv[2]);
        printf("cmd = %s\n",cmd);

        system(cmd);
    }
    else{
        printf("error!\n");
    }
    return 0;
}
```
# fgets函数
## 示例代码
```sh
char *fgets(char *s, int size, FILE *stream);
功能： 就是一次读取一行,遇到'\n'就立刻返回. 当返回值为NULL时表示文件读取结束
参数： s , 用于存放读取的字符串(传递数组名即可)
      size, 指定读取一次最多读取到的字节个数
      stream, 直接填写stdin即可   
      
比如： fgets(buf, 64, stdin); 从标准输入读入一行  
```
例如：
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char c[100];
  fgets(c,64,stdin);
  printf("%s",c);
  return 0;
}
```
## 编写:
使用C语言修改当前目录中的文件名。[提示： 可以将文件名称提前写进一个文件中(ls > filenames)]

例如：
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char * argv[]){
  char si[100];
  char sl[100] = "mv ";
  char cl[100] = " ";
  while(fgets(si,64,stdin) != NULL){
    si[strlen(si) - 1] = '\0';
    strcat(sl,si);
    strcat(sl,cl);
    strcat(si,"-1");
    strcat(sl,si);
    printf("%s\n",sl);
    system(sl);
    strcpy(sl,"mv \0");
  }
  return 0;
}
```
![](http://p1.bpimg.com/1949/2b008552acc4f802.png)

