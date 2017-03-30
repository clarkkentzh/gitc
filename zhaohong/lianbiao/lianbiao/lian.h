typedef int datatype;//单纯的一个定义类型，datatype就相当于int
typedef struct node{
  datatype data;
  struct node * next;
  struct node * prev;
}linknode,*linklist;

linklist link_create(int val);
int link_headin(linklist p,datatype val);
int insert(linklist p,datatype val,int n);
int search_list(linklist p,int n);
linklist delete_list(linklist p,int n);
void link_show(linklist p);
void link_show1(linklist p);
