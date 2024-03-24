#include <bits/stdc++.h>
using namespace std;

int a[10];
int vis[10];

int gcd(int a,int b)
{
    return !b?a:gcd(b,a%b);
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

inline void write(int res)
{
    if (res < 0)
    {
        putchar('-');
        res = -res;
    }
    if (res > 9)
        write(res / 10);
    putchar(res % 10 + '0');
}

inline int read()
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

void dfs(int pos,int n)
{
    if(pos==n)
    {
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            a[pos]=i;
            dfs(pos+1,n);
        }
    }
}



int main()
{
    int n;
    cin>>n;
    dfs(0,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}