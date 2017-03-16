#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sqlite3.h>

#define M 32
#define N 128

int do_insert(sqlite3 *db);
int do_delete(sqlite3 *db);
int do_update(sqlite3 *db);

int main(int argc,char *argv[]){
  sqlite3 *db;
  char *errmsg;
  char clean[M];
  int ret;
  int cmd;

  if(sqlite3_open("./my.db",&db) != SQLITE_OK){
    printf("%s\n",sqlite3_errmsg(db));
    return -1;
  }

  if((ret = sqlite3_exec(db,"create table stu(id integer,name vchar(32) not null,\
  score integer not null)",NULL,NULL,&errmsg)) != SQLITE_OK){
    if(ret != 1){
      printf("%s\n",errmsg);
      sqlite3_close(db);
      return -1;
    }
  }
  while(1){
    printf("\e[32m*** 1:insert  2:delete  3:show  4:update  5:quit ***\e[0m\n");
    printf("please input your cmd > ");

    if(scanf("%d",&cmd) != 1){
      puts("input error!");
      fgets(clean,sizeof(clean),stdin);
      continue;
    }
    switch(cmd){
      case 1:
      do_insert(db);
      break;
      case 2:
      do_delete(db);
      break;
      case 4:
      do_update(db);
      break;
      case 5:
      goto RET;
    }
  }
RET:
  sqlite3_close(db);
  return 0;
}
int do_insert(sqlite3 *db){
  int id;
  char name[M] = {0};
  int score;
  char sql[N] = {0};
  char *errmsg;

  printf("input student id > ");
  scanf("%d",&id);

  printf("input student name > ");
  scanf("%s",name);

  printf("input studnet scroe > ");
  scanf("%d",&score);

  sprintf(sql,"insert into stu values(%d,'%s',%d)",id,name,score);

  if(sqlite3_exec(db,sql,NULL,NULL,&errmsg) != SQLITE_OK){
    printf("%s\n",errmsg);
    return -1;
  }
  printf("\e[34minsert ok!\e[0m\n");
  return 0;
}
int do_delete(sqlite3 *db){
  int id;
  int score;
  char sql[N] = {0};
  char *errmsg;

  printf("input studnet id > ");
  scanf("%d",&id);

  sprintf(sql,"delete from stu where id = %d",id);

  if(sqlite3_exec(db,sql,NULL,NULL,&errmsg) != SQLITE_OK){
    printf("%s\n",errmsg) ;
    return -1;
  }
  printf("\e[34mdelete ok!\e[0m\n");
  return 0;
}
int do_update(sqlite3 *db){
  int id;
  int score;
  char sql[N] = {0};
  char *errmsg;

  printf("input studnet id > ");
  scanf("%d",&id);

  printf("input student new score > ");
  scanf("%d",&score);

  sprintf(sql,"update stu set score = %d where id = %d",score,id);

  if(sqlite3_exec(db,sql,NULL,NULL,&errmsg) != SQLITE_OK){
    printf("%s\n",errmsg);
    return -1;
  }
  printf("\e[34mupdate ok!\e[0m\n");
  return 0;
}
