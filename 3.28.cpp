#include<bits/stdc++.h>
using namespace std;
// 手写单向链表

typedef struct Link{
    int elem;
    struct Link *next;
}link;

//初始化一下
link *llinit()
{
    link *p=(link*) malloc (sizeof(link));//创建一个头节点
    if(p==NULL)
    {
        printf("malloc failed!\n");
        return NULL;
    }
    
    (*p).elem=-1;
    p->next=NULL;
    return p;
}

//链表长度
int lllen(link *it) 
{
    link *p=it->next;
    int len=0;
    while(p!=NULL)
    {
        len++;
        p=p->next;
    }
    return len;
}

//清空链表
void llclear(link *it) 
{
    link *p=it->next;
    link *q=NULL;
    while(p!=NULL)
    {
        q=p->next;
        free(p);
        p=q;
    }
}

//插入节点 it链表，在pos插入数据data
int llinsert(link *it,int data,int pos) 
{
    int len=lllen(it);
    if(pos>len || pos<0)//位置越界
    {
        printf("position invalid!\n");
        return -1;
    }

    link *p=(link*)malloc(sizeof(link));//开个节点

    if(p==NULL)
    {
        printf("malloc failed!\n");
        return -1;
    }
    p->elem=data;
    p->next=NULL;

    link *q=it;
    for(int i=0;i<pos;i++)
    {
        q=q->next;
    }   
    p->next=q->next;
    q->next=p;
    return 0;
}


//查找data的 节点 返回pos
int llsearch(link *it,int data)  
{
    link *p=it->next;
    int pos=0;
    while(p!=NULL)
    {
        if(data==p->elem)
        {
            return pos;
        }
        pos++;
        p=p->next;
    }
    return -1;
}

//删除节点
int llddel(link *it,int data)  
{
    int pos=llsearch(it,data);
    if(pos==-1)
    {
        printf("search failed!\n");
        return -1;
    }
    link *p=it;
    
    for(int i=0;i<pos;i++)
    {
        p=p->next;
    }
    link *q=p->next;
    p->next=q->next;
    free(q);
    q=NULL;
    return 0;

}

//显示整个链表
void llshow(link *it)
{
    link *p=it->next;
    while(p!=NULL)
    {
        
        printf("%d ",p->elem);
        p=p->next;
    }
}

int main()
{

    link *p=llinit();
    for(int i=1;i<=10;i++)
    {
        if(-1==llinsert(p,i,0))
        {
            printf("insert failed!\n");
            break;
        }
    }
    int a=llddel(p,5);
    llshow(p);
    return 0;
}