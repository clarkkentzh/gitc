#include <stdio.h>
#include <string.h>
char mystrcat(char * si, char * sl,char * so){
  char s[100] = {};
/*  strcat(s,si);
  strcat(s,sl);
  strcat(s,so);*/
  sprintf(s,"%s%s%s",si,sl,so);
  printf("%s\n",s);
}
int main(int argc,const char * argv[])
{
  char a[100] = "<h1>";
  char b[] = "nihao beijing";
  char c[] = "</h1>";
  int i;
  printf("Content type: text/html\n\n");
  printf("<html>\n");
  printf("<head><title>An html page from a cgi</title>\n");
  printf("<style type=\"text/css\">");
//  printf("h1 {color:#780000;text-align:center;} h2{color:#980000;} h3{color:blue;text-align:right;} h4{color:#990099}");
  printf("</style></head>\n");
  printf("<body bgcolor=\"#006632\">\n");
  printf("<h1>Hello world!</h1>\n");
//  for(i = 0;i < 5;i++){
  mystrcat(a,b,c);
  mystrcat(a,b,c);
  mystrcat(a,b,c);
//}
  printf("</body>\n");
  printf("</html>\n");
  fflush(stdout);
  return 0;
}
