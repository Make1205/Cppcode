#include <bits/stdc++.h>
using namespace std;

#define N 100009

//手写二叉树

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

typedef struct btnode{
    int dt;
    btnode *l,*r;
}btnd;

typedef struct bitree{
    btnode *root;
}bte;

void create(bte *bt)
{
    bt->root=NULL;
    return ;
}

btnd *newnode(int v,btnd *ln,btnd *rn)
{
    btnd *p=(btnd*)malloc(sizeof(btnd));
    p->dt=v;
    p->l=ln;
    p->r=rn;
    return p;
}

void mkt(bte *bt,int v,bte *l,bte *r)
{
    if(bt->root || l==r)
    {
        return;
    }
    bt->root=newnode(v,l->root,r->root);
    l->root=NULL;
    r->root=NULL;

}

void preo(btnd *t)
{
    if(!t)return;
    printf(" %d ",t->dt);
    preo(t->l);
    preo(t->r);
}

void preot(bte *bt)
{
    preo(bt->root);
}

void clear(btnd *t)
{
    if(!t)return;
    clear(t->l);
    clear(t->r);
    free(t);
}

void tclear(bte *bt)
{
    clear(bt->root);
}

int main()
{
    bte a,b,x,y,z;
    create(&a);
    create(&b);
    create(&x);
    create(&y);
    create(&z);

    mkt(&y,1,&a,&b);
    mkt(&z,2,&a,&b);
    mkt(&x,3,&y,&z);
    mkt(&y,4,&a,&b);
    mkt(&z,5,&y,&z);
    preot(&z);
    tclear(&z);
    return 0;
}