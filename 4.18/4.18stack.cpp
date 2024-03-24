#include<bits/stdc++.h>
using namespace std;
#define N 10009
int qp(int a, int b)
{
    if (b == 0) return 1;
    if (b % 2 == 1) return qp(a, b / 2) * qp(a, b / 2) * a;
    if (b % 2 == 0) return qp(a, b / 2) * qp(a, b / 2);
    return 1;
}

int read(){
    int s=0,w=1;
    char c=getchar();
    while(c>'9' || c<'0')
    {
        if(c=='-')w=-1;
        c=getchar();
    }
    while(c<='9' && c>='0')
    {
        s+=(s<<3)+(s<<1)+c-48;
        c=getchar();
    }
    return s*w;
}

//手写栈

typedef struct{
    int data[N];
    int top;
}stk;

//压栈
void push(stk &s,int e)
{
    if(s.top==N) return;
    s.data[++s.top]=e;
    return;
}

//出栈
void pop(stk &s)
{
    if(s.top==0)return;
    s.top--;
    return;
}

//栈中元素数
int size(stk &s)
{
    return s.top;
}

//返回栈顶元素
int top(stk &s)
{
    return s.data[s.top];
}

int main()
{
    // stack test
    stk s;
    s.top=0;
    for(int i=1;i<=10;i++)
    {
        push(s,i);
    }

    cout<<size(s)<<endl;
    cout<<top(s)<<" ";
    for(int i=1;i<10;i++)
    {
        pop(s);
        cout<<top(s)<<" ";
    }
    return 0;
}