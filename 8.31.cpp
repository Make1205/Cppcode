#include <bits/stdc++.h>
using namespace std;


#define  ll long long
int ans=0;
int n;
int a[1000009];

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

//  inline int read()
// {
//     int s = 0, w = 1;
//     char c = getchar();
//     while (c > '9' || c < '0')
//     {
//         if (c == '-')
//             w = -1;
//         c = getchar();
//     }
//     while (c <= '9' && c >= '0')
//     {
//         s += (s << 3) + (s << 1) + c - 48;
//         c = getchar();
//     }
//     return s * w;
// }

template<class T>inline void read(T &res)
{
char c;T flag=1;
while((c=getchar())<'0'||c>'9')if(c=='-')flag=-1;res=c-'0';
while((c=getchar())>='0'&&c<='9')res=res*10+c-'0';res*=flag;
}
 
int main()
{
    
    read(n);
    for(int i=0;i<n;i++) read(a[i]); 
    sort(a,a+n);
    int mid=a[n/2];
    for(int i=0;i<n;i++)ans+=abs(a[i]-mid);
    cout<<ans<<endl;
    
    return 0;
}