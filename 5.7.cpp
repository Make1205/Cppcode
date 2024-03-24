#include<bits/stdc++.h>
using namespace std;
#define N 100000007
#define INF 0x3f3f3f3f
int n;


// 数组模拟二叉树
// 输入n 节点个数 按bfs序输入节点值 

inline void write(int res){
	if(res<0){putchar('-');res=-res;}
	if(res>9)write(res/10);
	putchar(res%10+'0');
}

inline int readd()
{
    int s = 0, w = 1;
    char c = getchar();
    while (c > '9' || c < '0'){if (c == '-')w = -1;c = getchar();}
    while (c <= '9' && c >= '0'){s += (s << 3) + (s << 1) + c - 48;c = getchar();}
    return s * w;
}

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

void read()
{
    memset(a,INF,sizeof(a));
    n=readd();
    for(int i=1;i<=n;i++)
    {
        a[i]=readd();
    }
}

void dep()
{
    int res=0;
    while(qp(2,res)<n)
    {
        res++;
    }
    write(res);
}

void pre(int pos)
{
    if(a[pos]!=INF)
    {
        write(a[pos]);
    }
    if(a[pos*2]!=INF) //判断是不是叶节点
    {
        pre(pos*2);
        pre(pos*2+1);
    }
    
    return ;
}

void in(int pos)
{
    if(a[pos*2]!=INF) //判断是不是叶节点
    {
        in(pos*2);
    }
    if(a[pos]!=INF)
    {
        write(a[pos]);
    }
    if(a[pos*2+1]!=INF) //判断是不是叶节点
    {
        in(pos*2+1);
    }
    
    return ;
}

void post(int pos)
{
    
    if(a[pos*2]!=INF) //判断是不是叶节点
    {
        post(pos*2);
        post(pos*2+1);
    }
    if(a[pos]!=INF)
    {
        write(a[pos]);
    }
    
    return ;
}

int main()
{
    read();
    pre(1);
    printf("\n");
    in(1);
    printf("\n");
    post(1);
    printf("\n");
    dep();
    return 0;
}


/*

4
1 2 3 4


7 
1 2 3 4 5 6 7

*/