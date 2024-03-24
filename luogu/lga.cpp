#include<bits/stdc++.h>
using namespace std;


int main()
{
    double n,k,p,q; //n个球，k个橙色，剩下的是绿的 至少增加多少绿球才能让橙球的占比小于p/q
    cin>>n>>k>>p>>q;
    
    for(int i=0;;i++)
    {
        if(k*q<=(n+i)*p)
        {
            cout<<i;
            break;
        }
    }
    
    return 0;
}