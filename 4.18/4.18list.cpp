#include <bits/stdc++.h>
using namespace std;

int qp(int a, int b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 1)
        return qp(a, b / 2) * qp(a, b / 2) * a;
    if (b % 2 == 0)
        return qp(a, b / 2) * qp(a, b / 2);
    return 1;
}

int read()
{
    int s = 0, w = 1;
    char c = getchar();
    while (c > '9' || c < '0')
    {
        if (c == '-')
            w = -1;
        c = getchar();
    }
    while (c <= '9' && c >= '0')
    {
        s += (s << 3) + (s << 1) + c - 48;
        c = getchar();
    }
    return s * w;
}

//手写单向链表

typedef struct Link
{
    int dt;
    struct Link *next;
} link;

//整个链表初始化
link *init()
{
    link *p = (link *)malloc(sizeof(link));
    if (p == NULL)
    {
        cout << "malloc failed" << endl;
        return NULL;
    }
    p->dt = -1;
    p->next = NULL;
    return p;
}

//链表长度
int lllen(link *it)
{
    link *p = it->next;
    int len = 0;
    while (p != NULL)
    {
        len++;
        p = p->next;
    }
    return len;
}

//清空整个链表
void clear(link *it)
{
    link *p = it->next;
    link *q = NULL;
    while (p != NULL)
    {
        q = p->next;
        free(p);
        p = q;
    }
}

//插入节点 it链表 在pos插入数据data
void insert(link *it, int data, int pos)
{
    int len = lllen(it);
    if (pos > len || pos < 0) //位置越界
    {
        cout << "pos invalid" << endl;
        return;
    }
    link *p = (link *)malloc(sizeof(link)); //开个节点
    if (p == NULL)
    {
        cout << "malloc failed!" << endl;
        return;
    }
    p->dt = data;
    p->next = NULL;
    link *q = it;
    for (int i = 0; i < pos; i++)
    {
        q = q->next;
    }
    p->next = q->next;
    q->next = p;
    return;
}

//查找data的节点 返回pos
int llsearch(link *it, int data)
{
    link *p = it->next;
    int pos = 0;
    while (p != NULL)
    {
        if (data == p->dt)
        {
            return pos;
        }
        pos++;
        p = p->next;
    }
    return -1;
}

//删除节点 按照内容
void erase(link *it, int data)
{
    int pos = llsearch(it, data);
    if (pos == -1)
    {
        cout << "data invalid" << endl;
        return;
    }
    link *p = it;
    for (int i = 0; i < pos; i++)
    {
        p = p->next;
    }
    link *q = p->next;
    p->next = q->next;
    free(q);
    q = NULL;
    return;
}

void show(link *it)
{
    link *p = it->next;
    while (p != NULL)
    {
        cout << p->dt << " ";
        p = p->next;
    }
}

int main()
{
    link *p=init();
    for(int i=1;i<=10;i++)
    {
        insert(p,i,0);
    }
    erase(p,5);
    show(p);
    return 0;
}