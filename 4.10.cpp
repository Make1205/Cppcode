#include <bits/stdc++.h>
using namespace std;
//手写栈

#define N 100009

int ans = 0;
int cnt = 0;

typedef struct
{
    int data[N];
    int topit;
} sqstk;

int qp(int a, int b)
{
    if (b == 0) return 1;
    if (b % 2 == 1) return qp(a, b / 2) * qp(a, b / 2) * a;
    if (b % 2 == 0) return qp(a, b / 2) * qp(a, b / 2);
    return 1;
}

void push(sqstk &l, int e) //压栈
{
    if (l.topit == N - 1)
    {
        printf("Stack is full! \n");
        return;
    }
    l.data[l.topit++] = e;
    return;
}

void pop(sqstk &l) //弹出
{
    if (l.topit == 0) return;
    --l.topit;
    return ;
}

int emporful(sqstk &l)
{
    if (l.topit == 0)
    {
        return 1;
    }
    if (l.topit == N - 1)
    {
        return 2;
    }
    return 0;
}

void show(sqstk &l)
{
    int tmp = l.topit - 1;
    while (tmp != -1)
    {
        printf("%d", l.data[tmp--]);
    }
    printf("\n");
}

void ttb(int x) //十 to 二
{
    printf("原数字：%d   ", x);
    sqstk res;
    res.topit = 0;
    int cnt = 0;
    while (x > 0)
    {
        push(res, x & 1);
        x = x >> 1;
    }
    printf("二进制：  ");
    show(res);
}

void btt(int x) //二 to 十
{
    printf("原数字：%d   ", x);
    sqstk res;
    res.topit = 0;
    while (x > 0)
    {
        push(res, x % 10);
        x = x / 10;
        cnt++;
    }
    while (cnt--)
    {
        ans += qp(2, cnt) * res.data[cnt];
    }
    printf("十进制： %d ", ans);
}

int main()
{
    ttb(100);
    btt(1111);
    return 0;
}