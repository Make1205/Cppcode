#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    
    return 0;
}