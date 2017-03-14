#include <stdio.h>
#include <string.h>
int main(int argc,const char * argv[]){
  char si[15] = "HELLO ";
  char sl[15] = "World";
  char h[30];
  sprintf(h,"%s %s",si,sl);
  printf("Content type: text/html\n\n");
  printf("<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">");
  printf("<html>\n");
  printf("<html lang=\"en\">\n");
  printf("<meta charset=\"UTF-8\">\n");
  printf("<head><title>%s</title>\n",h);
  printf("<style type=\"text/css\">");
  printf("table{border-collapse:collapse;}table, td, th{border:1px solid black;}");
  printf("h1 {color:yellow}");
  printf("</style></head>\n");
  printf("<body>\n");
  printf("<body bgcolor = green>");
  printf("<h1>全栈H5课程市场咨询培训</h1>\n");
  printf("<h2>1.HTML5导论</h2>\n");
  printf("<h3>什么是HTML5【1】</h3>");
  printf("<p>答：广义论及HTML5时，实际指的是包括HTML、CSS和JavaScript在内的一套技术组合。HEML超文本标记语言（英语：HypertextMarkupLanguage，简称：HEML）是一种用于创建网页的标准标记语言。</p>\n<p>CSS是层叠样式表（英语：CascadingStyleSheets，简写CSS），又称串样式列表、级联样式表、串接样式表、层叠样式表，一种用来为结构化文档（如HTML文档或XML应用）添加样式（字体、间距和颜色等）的计算机语言，由W3C定义和维护。</p>\n<p>JavaScript一种解释型脚本语言，是一种动态类型、基于原型的语言，内置支持类。它的解释器被称为JavaScript引擎，为浏览器的一部分，广泛用于客户端的脚本语言，最早是在HTML网页上使用，用来给HTML网页增加动态功能。然而现在JavaScript也可被用于网络服务器，如Node.js。</p>\n");
  printf("<h3>发展史【3】</h3>\n");
  printf("<p><ul><li>HTML1.0————在1993年6月作为互联网工程工作小组（IETF）工作草案发布（并非标准）；</li><li>HTML2.0————1995年11月作为RFC1866发布，在RFC2854于2000年6月发布之后被宣布已经过时</li><li>HTML3.2————1997年1月14日，W3C推荐标准</li><li>HTML4.0————1997年12月18日，W3C推荐标准</li><li>HTML4.01（微小改进）————1999年12月24日，W3C推荐标准</li><li>HTML5————2014年10月28日，W3C推荐标准</li></ul></p>\n");
  printf("<p>万维网联盟（World Wide Web Consortium,W3C）又称W3C理事会。1994年10月在麻省理工学院计算机科学实验室成立。创建者是互联网的发明者蒂姆·伯纳斯·李。【4】</p>");
  printf("<h3>原来HTML4和现在的HTML5的差异</h3>\n");
  printf("<p>从HTML语法本身也有很大的变化，HTML5增加了更多的新的元素在里面</p>\n<p>HTML语言：</p>");
  printf("<table><tr><th>HTML4</th><th>HTML5</th></tr>");printf("<tr><td>单一标记性语言</td><td>增加了新元素，例如有画图元素，多媒体元素等。</td></tr>");
  printf("<tr><td>程序接口DOM</td><td>增加了列多的API接口，如：离线数据库存储，文档编辑，拖拽控制等。</td></tr><table>");
  printf("<p>编程语言：</p>");
  printf("<table><tr><th>HTML4</th><th>HTML5</th></tr>");printf("<tr><td>前端：HTML,CSS,JavaScript</td><td>JavaScript</td></tr>");
  printf("<tr><td>后端：PHP,C,Perl等</td><td>JavaScript</td></tr></table>");
  printf("<p>数据库：</p>");
  printf("<table><tr><th>HTML4</th><th>HTML5</th></tr>");printf("<tr><td>关系型数据库，mysql等</td><td>非关系型数据库，如MongoDB</td></tr></table>");
  printf("<p>服务器的架：</p>");
  printf("<table><tr><th>HTML4</th><th>HTML5</th></tr>");printf("<tr><td>Linux + mysql + php + apache</td><td>Docker + NodeJS or Meteor</td></tr></table>\n");
  printf("<p><img src = \"http://p1.bpimg.com/1949/445be84bb2061c23.jpg\" width=\"900\" height=\"600\"/></p>\n");
  //printf("<body background=\"http://p1.bpimg.com/1949/8ae6ddf110972935.jpg\">\n");
  printf("</body>\n");
  printf("</html>\n");

  fflush(stdout);
  return 0;

}
