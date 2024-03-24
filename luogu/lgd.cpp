#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100009];

//第一行输入 n q
//第二行输入一个整数V
//第三行输入n个整数 第i个为ai
//接下来q行，第i行输入xi，yi

int main()
{
    
    ll q,n,v,cnt=0;
    ll x,y;
    cin>>n>>q;
    cin>>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    if(q!=0)
    {
        for(int i=0;i<q;i++)
        {
            cin>>x>>y;
            a[x-1]=y;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]>=v)cnt++;
    }
    cout<<cnt;
    return 0;
}