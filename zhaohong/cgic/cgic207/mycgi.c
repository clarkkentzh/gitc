#if 1
#define SERVER_NAME cgiServerName
#endif
#if 0
#define SERVER_NAME "www.boutell.com"
#endif

#ifdef WIN32
#define SAVED_ENVIRONMENT "c:\\cgicsave.env"
#else
#define SAVED_ENVIRONMENT "/tmp/cgicsave.env"
#endif

#include <stdio.h>
#include "cgic.h"
#include <string.h>
#include <stdlib.h>

void HandleSubmit();
void CookieSet();
void LoadEnvironment();
void ShowForm();
void RadioButtons();
void SaveEnvironment();
void Name();
void Address();

int cgiMain() {
#ifdef DEBUG
	LoadEnvironment();
#endif
  if (cgiFormSubmitClicked("loadenvironment") == cgiFormSuccess) {
    LoadEnvironment();
  }
  CookieSet();
  cgiHeaderContentType("text/html");
  fprintf(cgiOut, "<HTML><meta charset=\"UTF-8\"><HEAD>\n");
	fprintf(cgiOut, "<TITLE>cgic test</TITLE></HEAD>\n");
	fprintf(cgiOut, "<BODY><H1>cgic 测试</H1>\n");
  if ((cgiFormSubmitClicked("testcgic") == cgiFormSuccess) ||
		cgiFormSubmitClicked("saveenvironment") == cgiFormSuccess)
	{
		HandleSubmit();
		fprintf(cgiOut, "<hr>\n");
	}
  ShowForm();
  fprintf(cgiOut, "</BODY></HTML>\n");
	return 0;
}
void HandleSubmit(){
  Name();
  RadioButtons();
  Address();

  if (cgiFormSubmitClicked("saveenvironment") == cgiFormSuccess) {
		SaveEnvironment();
  }
}
void Name(){
  char name[81];
	cgiFormStringNoNewlines("name", name, 81);
	fprintf(cgiOut, "Name: ");
	cgiHtmlEscape(name);
	fprintf(cgiOut, "<br>\n");
}
void Address() {
	char address[241];
  char add[241];
	cgiFormString("add", add, 241);
	cgiFormString("address", address, 241);
	fprintf(cgiOut, "<PRE>标题：\n");
  cgiHtmlEscape(add);
  fprintf(cgiOut, "<br>内容：\n");
	cgiHtmlEscape(address);
	fprintf(cgiOut, "</PRE>\n");
}
char *ages[] = {
	"1",
	"2",
	"3",
	"4"
};

void RadioButtons(){
	int ageChoice;
	char ageText[10];
  char si[32];
  char sl[32];
  int i,j,k;
  float n,m;
	cgiFormRadio("age", ages, 4, &ageChoice, 0);
	/*fprintf(cgiOut, "Age of Truck: %s (method #1)<BR>\n",
		ages[ageChoice]);*/
  k = atoi(ages[ageChoice]);
  cgiFormString("int",si,32);
  i = atoi(si);
  cgiFormString("ints",sl,32);
  j = atoi(sl);

  if(k == 1){
    fprintf(cgiOut, "a + b = %d",i + j);
  }
  else if(k == 2){
    fprintf(cgiOut, "a - b = %d",i - j);
  }
  else if(k == 3){
    fprintf(cgiOut, "a * b = %d",i * j);
  }
  else if(k == 4){
    n = i;
    m = j;
    fprintf(cgiOut, "a / b = %f",n / m);
  }
	/*cgiFormString("age", ageText, 10);
  fprintf(cgiOut, "Age of Truck: %s (method #2)<BR>\n", ageText);*/
}
void ShowForm()
{
	fprintf(cgiOut, "<!-- 2.0: multipart/form-data is required for file uploads. -->");
	fprintf(cgiOut, "<form method=\"POST\" enctype=\"multipart/form-data\" ");
	fprintf(cgiOut, "	action=\"");
	cgiValueEscape(cgiScriptName);
	fprintf(cgiOut, "\">\n");
  fprintf(cgiOut, "<p>\n");
  fprintf(cgiOut, "Your name<input type=\"text\" name=\"name\">\n");
  fprintf(cgiOut, "<br><br>\n");
  fprintf(cgiOut, "a=:<input type=\"text\" name=\"int\">\n");
  fprintf(cgiOut, "<br>\n");
  fprintf(cgiOut, "<input type=\"radio\" name=\"age\" value=\"1\" checked>+\n");
  fprintf(cgiOut, "<input type=\"radio\" name=\"age\" value=\"2\">-\n");
  fprintf(cgiOut, "<input type=\"radio\" name=\"age\" value=\"3\">*\n");
  fprintf(cgiOut, "<input type=\"radio\" name=\"age\" value=\"4\">/\n");
  fprintf(cgiOut, "<br>\n");
  fprintf(cgiOut, "b=:<input type=\"text\" name=\"ints\">\n");
  fprintf(cgiOut, "<br><br>\n");
  fprintf(cgiOut, "标题：<input type=\"text\" name=\"add\">\n");
  fprintf(cgiOut, "<br>");
  fprintf(cgiOut, "内容：\n");
	fprintf(cgiOut, "<p>\n");
	fprintf(cgiOut, "<textarea NAME=\"address\" ROWS=4 COLS=40>\n");
	fprintf(cgiOut, "</textarea>\n");
  fprintf(cgiOut, "<input type=\"submit\" name=\"saveenvironment\" value=\"Save Environment\">\n");
  fprintf(cgiOut, "<br>");
  fprintf(cgiOut, "</form>\n");
}
void CookieSet()
{
	char cname[1024];
	char cvalue[1024];
	/* Must set cookies BEFORE calling cgiHeaderContentType */
	cgiFormString("cname", cname, sizeof(cname));
	cgiFormString("cvalue", cvalue, sizeof(cvalue));
	if (strlen(cname)) {
		/* Cookie lives for one day (or until browser chooses
			to get rid of it, which may be immediately),
			and applies only to this script on this site. */
		cgiHeaderCookieSetString(cname, cvalue,
			86400, cgiScriptName, SERVER_NAME);
	}
}

void LoadEnvironment()
{
	if (cgiReadEnvironment(SAVED_ENVIRONMENT) !=
		cgiEnvironmentSuccess)
	{
		cgiHeaderContentType("text/html");
		fprintf(cgiOut, "<head>Error</head>\n");
		fprintf(cgiOut, "<body><h1>Error</h1>\n");
		fprintf(cgiOut, "cgiReadEnvironment failed. Most "
			"likely you have not saved an environment "
			"yet.\n");
		exit(0);
	}
	/* OK, return now and show the results of the saved environment */
}

void SaveEnvironment()
{
	if (cgiWriteEnvironment(SAVED_ENVIRONMENT) !=
		cgiEnvironmentSuccess)
	{
		fprintf(cgiOut, "<p>cgiWriteEnvironment failed. Most "
			"likely %s is not a valid path or is not "
			"writable by the user that the CGI program "
			"is running as.<p>\n", SAVED_ENVIRONMENT);
	}
  else {
		fprintf(cgiOut,/* "<p>Environment saved. Click this button "
			"to restore it, playing back exactly the same "
			"scenario: "*/
			"<form method=POST action=\"");
		cgiValueEscape(cgiScriptName);
		fprintf(cgiOut, "\""
			"<input type=\"submit\""
			"value=\"Load Environment\" "
			"name=\"loadenvironment\"></form></p>\n");
	}
}
