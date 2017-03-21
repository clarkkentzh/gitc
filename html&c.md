## 编写一个index.html文件， 并将这个文件复制到/var/www/html目录下。需要加sudo权限。
HTML代码：
```html
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <title>Document</title>
</head>
<body>

  <form action="cgi-bin/cgi" method="GET">
      a = : <input type="text" name="a" />
      +
      b = : <input type="text" name="b" />
      <input type="submit" name="" value="Sumbit">
  </form>
</body>
</html>
```
修改示例：
```html
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta http-equiv="X-UA-Compatible" content="ie=edge">
  <title>Document</title>
</head>
<body>

  <form action="cgi-bin/cgi" method="GET">
      a =:<input type="text" name="a" />
      <br>
      +<input type="radio" checked="checked" name="fuhao" value="0" />
      <br>
      -<input type="radio" name="fuhao" value="1" />
      <br>
      *<input type="radio" name="fuhao" value="2" />
      <br>
      /<input type="radio" name="fuhao" value="3" />
      <br>
      b =:<input type="text" name="b" />
      <input type="submit" name="" value="Sumbit">
  </form>
</body>
</html>
```

## 编写一个cgi.c的文件， 首先将它编译成cgi文件， 并将这个文件复制到/usr/lib/cgi-bin/目录下。需要加sudo权限。
CGI代码：
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char a[100];
  long i, j;
  char *data;
  printf("Content type: text/html\n\n");
  printf("<html lang=\"en\">\n");
  printf("<meta charset=\"UTF-8\">\n");
  printf("<head><title>An html page from a cgi</title>\n");
  printf("<style type=\"text/css\">");
  printf("</style></head>");
  printf("<body>\n");
  data = getenv("QUERY_STRING");
  if(data == NULL)
    printf("error!!!\n");
  printf("%s\n", data);
  sscanf(data, "a=%ld&b=%ld", &i, &j);
  printf("fname=%ld\n", i + j);
  printf("</body>\n");
  printf("</html>\n");

  fflush(stdout);
  return 0;
}
```
修改示例：
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char a[100];
  long i, j;
  int k;
  char *data;
  printf("Content type: text/html\n\n");
  printf("<html lang=\"en\">\n");
  printf("<meta charset=\"UTF-8\">\n");
  printf("<head><title>An html page from a cgi</title>\n");
  printf("<style type=\"text/css\">");
  printf("</style></head>");
  printf("<body>\n");
  data = getenv("QUERY_STRING");
  if(data == NULL)
    printf("error!!!\n");
  printf("%s\n", data);
  sscanf(data, "a=%ld&fuhao=%d&b=%ld", &i, &k, &j);
  printf("<br>");
  if(k == 0){
    printf("sum = %ld", i + j);
  }
  else if(k == 1){
    printf("sum = %ld",i - j);
  }
  else if(k == 2){
    printf("sum = %ld",i * j);
  }
  else{
    printf("sum = %ld",i / j);
  }
  printf("</body>\n");
  printf("</html>\n");

  fflush(stdout);
  return 0;
}
```

* 完成上面两步， 请打开浏览器， 在浏览器的地址栏中输入： http://localhost
## cgic基本使用
* [cgic官网链接] (https://boutell.com/cgic/)
### 下载tar文件
复制图片中第一个链接地址
![压缩包](http://p1.bqimg.com/1949/7d54f3cd7037b4b2.png)
在终端用wget -c 加链接下载链接的压缩包
最后用tar xvf指令解压压缩包
### 获取表单数据
```c
cgiFormResultType   cgiFormString(char *name, char *result, int max);
参数：  name, 指定要获取的表单项的名字
       result,将获得的数据存储到result中
       max， 指定最多读取的字符个数

比如： cgiFormString("name", result,  16);可以获得最多16个字符并且保存于result中
```
### 补充函数fprintf
```c
int fprintf(FILE *stream, const char *format, ...);
功能： 将格式化的语句输出到指定的流
fprintf(stdin, "helloworld\n")  等价于 printf("helloworld\n);
```
### 补充函数atoi
```c
int atoi(const char *nptr);
功能：将一个字符串转换成对应的数字，比如：“1234” ==》 1234
```



