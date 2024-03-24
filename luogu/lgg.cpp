#include<bits/stdc++.h>
using namespace std;
#define ll long long
//第一行输入n表示题目总数
//接下来n行 每行4个整数 第i行第j个数 aij表示正确答案 0不选 1选
//接下来n行 每行4个整数 第i行第j个数 bij表示小f的答案 0不选 1选

ll a[2000][10];
ll b[2000][10];

ll jud(ll a[],ll b[])
{
    int flag[4]={1,1,1,1};
    for(int i=0;i<4;i++)
    {
        if(a[i]==0 and b[i]==1)return 0;
        if(a[i]==1 and b[i]==0) flag[i]=0;
    }
    int ff=0;
    for(int i=0;i<4;i++)
    {
        if(flag[i]==1)ff++;
    }

    if(ff<4 and ff>=1)return 3;
    else return 6;
}

int main()
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)cin>>b[i][j];
    }
    
    for(int i=0;i<n;i++)
    {
        ll tmp=0;
        for(int j=0;j<n;j++)
        {
            tmp+=jud(a[(j+i)%n],b[j]);
            // cout<<jud(a[(j+i)%n],b[j])<<" ";
        }
        if(i!=n-1) cout<<tmp<<" ";
        else cout<<tmp;
        // cout<<"\n";
    }


    return 0;
}


/*

3
0 1 0 1
0 1 1 0
0 0 1 1
0 0 1 0
0 1 0 0
0 1 1 0

0 1 0 1
0 1 1 0
0 0 1 1
0 0 1 0
0 1 0 0
0 1 1 0
*/