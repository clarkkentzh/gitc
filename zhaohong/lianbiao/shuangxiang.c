#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node * next;
    struct Node * prev;
}linknode, * linklist;

linklist create_list(void);    //创建节点
void traverse_list(linklist p);    //遍历链表（打印）
int length_list(linklist p);        //求链表长度
void sort_list(linklist p);        //排序
void insert_list(linklist p, int pos, int val);        //插入节点
void delect_list(linklist p, int pos, int *val);    //删除节点
int find_list(linklist p, int val,int *pos);        //查找元素

int main(int argc, char* argv[])
{
    int pos_insert;
    int val_insert;
    int pos_delect;
    int val_delect;
    int pos_find;
    int val_find;

    linklist pHead = NULL;

    pHead = create_list();
    printf("\n原来链表：\n");
    traverse_list(pHead);
    printf("链表的长度是：%d\n",length_list(pHead));
    printf("\n");

    printf("请输入您要插入的元素位置：pos = ");
    scanf("%d",&pos_insert);
    printf("请输入您要插入的元素值：val = ");
    scanf("%d",&val_insert);
    printf("插入元素后：\n");
    insert_list(pHead, pos_insert, val_insert);
    traverse_list(pHead);
    printf("链表的长度是：%d\n",length_list(pHead));
    printf("\n");

    printf("请输入您要删除的元素位置：pos = ");
    scanf("%d",&pos_delect);
    printf("删除元素后：\n");
    delect_list(pHead, pos_delect, &val_delect);
    traverse_list(pHead);
    printf("链表的长度是：%d\n",length_list(pHead));
    printf("您删除的节点元素是：%d\n",val_delect);
    printf("\n");

    printf("请输入您要查找的元素的值：val = ");
    scanf("%d",&val_find);
    printf("查找元素：\n");
    if(find_list(pHead, val_find, &pos_find) == 0)
    {
        traverse_list(pHead);
        printf("您要查找的元素位置是：%d\n", pos_find);
        printf("\n");
    }
    else
        printf("您要查找的元素不存在！\n");
    printf("\n");

    printf("排序后：\n");
    sort_list(pHead);
    traverse_list(pHead);
    printf("链表的长度是：%d\n",length_list(pHead));
    printf("\n");

    return 0;
}

linklist create_list(void)
{
    int len;
    int i, val;
    linklist pTail;

    linklist pHead = malloc(sizeof(linknode));
    if(NULL == pHead)
    {
        printf("error!\n");
        
    }
    pTail = pHead;
    pTail->next = NULL;

    printf("请输入您要创建链表的长度：\nlen = ");
    scanf("%d",&len);

    for(i = 0; i < len; i++)
    {
        printf("请输入第%d个节点的值：val = ", i+1);
        scanf("%d",&val);

        linklist pNew = malloc(sizeof(linknode));
        if(NULL == pNew)
        {
            printf("error!\n");
            exit(-1);
        }
        pNew->data = val;
        pTail->next = pNew;
        pTail = pNew->prev;
        pNew->next = NULL;
        pTail = pNew;
    }
    return pHead;
}

void traverse_list(linklist p)
{
    linklist q;
    q = p->next;
    if(NULL == q)
    {
        printf("链表为空！/n");
    }
    while(NULL != q)
    {
        printf("%d  ",q->data);
        q = q->next;
    }
    printf("/n");

    return;
}

int length_list(linklist p)
{
    int len = 0;
    linklist q;
    q = p;

    while(NULL != q)
    {
        len++;
        q = q->next;
    }
    return len-1;

}

void sort_list(linklist p)
{
    int len, i, j, temp;
    linklist k, q;

    len = length_list(p);

    for(i = 0,k = p->next; i < len; i++,k = k->next)
    {
        for(j = i+1, q = k->next; j < len; j++, q = q->next)
        {
            if(k->data > q->data)
            {
                temp = k->data;
                k->data = q->data;
                q->data = temp;
            }
        }
    }
    return;
}

void insert_list(linklist p, int pos, int val)
{
    int i;
    linklist pNew, q;
    q = p;

    pNew = malloc(sizeof(linknode));
    if(NULL == pNew)
    {
        printf("新节点动态内存分配失败，程序终止！/n");
        exit(-1);
    }
    pNew->data = val;

    if((pos > (length_list(p)+1)) || (pos <= 0))
    {
        printf("插入失败，插入位置不正确！/n");
        exit(-1);
    }
    for(i = 0; i < pos-1; i++)
    {
        q = q->next;
    }
    pNew->next = q->next;
    q->next = pNew;
    q = pNew->prev;

    return;
}

void delect_list(linklist p, int pos, int *val)
{
    int i;
    linklist q = p;

    if(length_list(p) == 0)
    {
        printf("链表为空，没有内容可以删除！/n");
        exit(-1);
    }
    if((pos > length_list(p)) || (pos <= 0))
    {
        printf("删除元素的位置不是合法位置，删除失败！/n");
        exit(-1);
    }
    for(i = 0; i < pos-1; i++)
    {
        q = q->next;
    }
    if(NULL == q->next->next)
    {
        *val = q->next->data;
        q->next = NULL;
    }
    else if(NULL == q->next->next->next)
    {
        *val = q->next->data;
        q->next->next = NULL;

    }
    else
    {
        *val = q->next->data;
        q->next = q->next->next;
        q->next->next->prev = q;
    }

    return;
}

int find_list(linklist p, int val,int *pos)
{
    linklist q = p;
    int i = 0;

    while(q != NULL)
    {
        i++;
        if(q->data == val)
        {
            *pos = i-1;
            return 0;
        }
        q = q->next;
    }
    return 1;
}
