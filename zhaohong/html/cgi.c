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
