#include<bits/stdc++.h>
using namespace std;
#define M 722733748
long long qp(long long a, long long b)
{
    a%=M;
    if (b == 0)
        return 1;
    if (b % 2 == 1)
        return (((qp(a%M, b / 2)%M) * (qp(a%M, b / 2)%M))%M * (a%M))%M;
    if (b % 2 == 0)
        return ((qp(a%M, b / 2)%M) * (qp(a%M, b / 2)%M))%M;
    return 1;
}



int main()
{
    long long k,a,q;
    cin>>k>>a>>q;
    cout<<(qp(a%M,k)%M*qp(q%M,k*(k-1)/2)%M)%M;
    return 0;
}