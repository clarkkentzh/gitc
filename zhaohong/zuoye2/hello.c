#include <stdio.h>
#include <string.h>
char mystrcat(char * si, char * sl){
  printf("<%s>%s</%s>\n",si,sl,si);
}
int main(int argc,const char * argv[])
{
  char a[] = "h1";
  char b[] = "h2";
  char c[] = "h3";
  char d[] = "h4";
  char f[] = "h5";
  char g[] = "h6";
  char h[] = "p";
  char k[] = "hello world!";
  int i;
  printf("Content type: text/html\n\n");
  printf("<html>\n");
  printf("<head><title>An html page from a cgi</title>\n");
  printf("<style type=\"text/css\">");
//  printf("h1 {color:#780000;text-align:center;} h2{color:#980000;} h3{color:blue;text-align:right;} h4{color:#990099}");
  printf("</style></head>\n");
  printf("<body bgcolor=\"#006632\">\n");
  printf("<h1>Hello world!</h1>\n");
  for(i = 0;i < 5;i++){
  mystrcat(a,k);
  mystrcat(c,k);
  mystrcat(d,k);
}
  printf("</body>\n");
  printf("</html>\n");
  fflush(stdout);
  return 0;
}
