#include<bits/stdc++.h>
using namespace std;

int fi[10];
int vis[10];

void init()
{
    memset(vis,0,sizeof(vis));
}

int ck()
{
    int tmp=0;

    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(fi[((i)*(j))%7]!=(fi[i]+fi[j])%6) tmp++;
        }
    }
    return tmp;
}

void wr()
{
    for(int i=1;i<=6;i++)cout<<fi[i]<<" ";
    cout<<"\n";
}

void dfs(int pos)
{
    if(pos==7)
    {
        if(ck()==0) wr();
        // wr();
        return;
    } 
    for(int i=0;i<=5;i++)
    {
        if(vis[i]==0){
            fi[pos]=i;
            vis[i]=1;
            dfs(pos+1);
            vis[i]=0;
        }
    }
}

int main()
{
    init();
    dfs(1);

    return 0;
}