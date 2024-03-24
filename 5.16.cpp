#include <bits/stdc++.h>
using namespace std;


const int N=1e4+9;
const int INF=0x3f3f3f3f;

int dis[N];
int vis[N];
int a[N][N];
int n;


// floyd

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

inline void write(int res){
	if(res<0){putchar('-');res=-res;}
	if(res>9)write(res/10);
	putchar(res%10+'0');
}

inline int read()
{
    int s = 0, w = 1;
    char c = getchar();
    while (c > '9' || c < '0'){if (c == '-')w = -1;c = getchar();}
    while (c <= '9' && c >= '0'){s += (s << 3) + (s << 1) + c - 48;c = getchar();}
    return s * w;
}

void reade()
{
    n=read();
    for(int i=1;i<=n;i++)
    {
        int u=read();
        int v=read();
        int w=read();
        a[u][v]=w;
        a[v][u]=w;
    }
}


void floyd()
{
    memset(a,INF,sizeof(a));
    for(int i=1;i<=n;i++)
    {
        a[i][i]=0;
    }
    reade();

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
            }
        }
    }
}


int main()
{
    floyd();
    cout<<a[1][4]<<endl;   
    return 0;
}