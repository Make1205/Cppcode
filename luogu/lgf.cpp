#include<bits/stdc++.h>
using namespace std;


//有n个任务 可派遣1-m条船 花费均为k


long long a[1009][1009];

int main()
{
    long long n,m,k;

    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            a[i][j]-=(j+1)*k;
        }
    }
    long long res=0;
    for(int i=0;i<n;i++)
    {
        sort(a[i],a[i]+m);
        // for(int j=0;j<m;j++)
        // {
        //     cout<<a[i][j]<<" ";
        // }
        // cout<<"\n";
        res+=a[i][m-1];
    }
    cout<<res;
    return 0;
}