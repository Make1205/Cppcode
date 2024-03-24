#include <bits/stdc++.h>
using namespace std;

#define N 100009

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

//手写队列 

typedef struct{
    int dt[N];
    int f,r;
}qu;

qu *init()
{
    qu *q=(qu *)malloc(sizeof(qu));
    q->f=1;
    q->r=1;
    return q;
}

void push()
{

}

void pop()
{

}

int main()
{
    qu *q=init();
    cout<<q->f<<endl;
    return 0;
}