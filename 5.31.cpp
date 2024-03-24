#include <bits/stdc++.h>
using namespace std;

const int N=1e5+9;
int a[N],n;
int b[N];


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

//读数据
void readd()
{
    n=read();
    for(int i=1;i<=n;i++)
    {
        a[i]=read();
    }
}

//冒泡
void bbst()
{
    for (int i = 1; i <= n; i++)
        for (int j = n; j > i; j--)
            if (a[j] <= a[j - 1]) swap(a[j], a[j - 1]);
}


//快排
int mv(int l, int r)
{
    int p = a[l];
    while (l < r)
    {
        while (l < r && a[r] >= p)
            r--;
        a[l] = a[r];
        while (l < r && a[l] <= p)
            l++;
        a[r] = a[l];
    }
    a[l] = p;
    return l;
}

void qs(int l, int r)
{
    if (l < r)
    {
        int pos = mv(l, r);
        qs(l, pos - 1);
        qs(pos + 1, r);
    }
}

//归并排序
void mgst(int l,int r)
{
    int mid=(l+r)>>1;
    int i=l,j=mid+1;
    int cnt=l,num=r-l+1;
    while(i<=mid && j<=r)
    {
        if(a[i]>=a[j])b[cnt++]=a[j++];
        else b[cnt++]=a[i++];
    }
    while(i<=mid)b[cnt++]=a[i++];
    while(j<=r)b[cnt++]=a[j++];

    for(int k=0;k<num;k++,r--)
    {
        a[r]=b[r];
    }
}

void mg(int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)>>1;
        mg(l,mid);
        mg(mid+1,r);
        mgst(l,r);
    }
}





int main()
{
    readd();
    // bbst();
    // qs(1,n);
    // mg(1,n);
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    return 0;
}