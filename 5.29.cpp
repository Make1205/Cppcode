#include <bits/stdc++.h>
using namespace std;

const int N=1e5+9;
int a[N],n;


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

void readd()
{
    n=read();
    for(int i=1;i<=n;i++)
    {
        a[i]=read();
    }
}

// void sort()
// {
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=n;j>i;j--)
//         {
//             if(a[j]<=a[j-1])swap(a[j],a[j-1]);
//         }
//     }
// }

int lbd(int x)
{
    int l = 1, r = n;
    while (l <= r)
    {
        int mid = l + ((r-l)>>1);
        if (x < a[mid])r = mid-1;
        else l = mid+1;
    }
    return l;
}

int ubd(int x)
{
    int l = 1, r = n;
	while(l <= r)
	{
		int mid = l + ((r-l)>>1);
		if(x > a[mid]) l = mid + 1;
		else r = mid - 1;
	}
	return l;
}



int main()
{
    readd();
    sort(a+1,a+1+n);
    int x=read();
    write(ubd(x));
    printf(" ");
    write(lbd(x));
    return 0;
}

/* 
4
1 2 4 5
3

4
1 2 2 3
2
*/