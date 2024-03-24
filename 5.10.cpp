#include <bits/stdc++.h>
using namespace std;

const int N=1e6+9;
const int INF=0x3f3f3f3f;

int cnt=0;
int head[N];
int dis[N];
int vis[N];
int par[N];
int f[N];

typedef pair<int, int> iPair; 
priority_queue<iPair, vector <iPair> , greater<iPair> > pq; //小根堆 可以手写但是懒

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

void init()
{
    memset(dis,INF,sizeof(dis));
    memset(head,-1,sizeof(head));
    memset(vis,0,sizeof(vis));
}

// 链式前向星

//并查集
int find(int x)  
{
    if(x==f[x])return x;
    else return x=find(f[x]);
}

//带权dij
struct Edge{
    int next;
    int to;
    int w;
}edge[N];

//带权kk
struct eg{
    int u;
    int v;
    int w;
}e[N];


//自定义比较
bool cmp(eg x,eg y)
{
    return x.w<y.w;
}

//链式前向星 加边
void add(int u,int v,int w)  
{
    edge[cnt].to=v;
    edge[cnt].w=w;
    edge[cnt].next=head[u];
    head[u]=cnt++;
}

//读边
void reade()  
{
    // memset(head, -1, sizeof(head));
    int n=read();
    int u,v,w;
    for(int i=1;i<=n;i++)
    {
        u=read();
        v=read();
        w=read();
        add(u,v,w);
    }
}


//dfs序
void dfs(int u) 
{
    for(int j = head[u]; j != -1; j = edge[j].next)
    {
        if(vis[edge[j].to]!=1)
            cout<<edge[j].to<<" ";
        vis[edge[j].to]=1;
        head[u] = edge[j].next; // == head[u]=edge[head[u]].next
        dfs(edge[j].to);//从此条边的终点进入dfs
    }
}

//kruskal
void kk() 
{
    int n=read(),m=read(); //n点 m边
    for(int i=1;i<=m;i++)
    {
        e[i].u=read();
        e[i].v=read();
        e[i].w=read();
    }
    sort(e+1,e+m+1,cmp);
    for(int i=1;i<=n;i++)f[i]=i;
    int tot=0; //点数
    int ans=0; //总边长

    for(int i=1;i<=m;i++)
    {
        int u=e[i].u;
        int v=e[i].v;
        int fu=find(u);
        int fv=find(v);
        if(fu==fv)continue;
        else{
            tot++;
            f[fu]=fv;
            ans+=e[i].w;
        }
    }
    write(ans);
}

//dij 传入起点
void dij(int f)
{
    pq.push(make_pair(0,f));
    dis[f]=0;

    while(!pq.empty())
    {
        f=pq.top().second;
        vis[f]=1;
        pq.pop();
        for(int i=head[f];~i;i=edge[i].next)
        {
            if(~vis[edge[i].to])
            {
                int v=edge[i].to;
                int w=edge[i].w;
                if(dis[v]>dis[f]+w)
                {
                    dis[v]=dis[f]+w;
                    pq.push(make_pair(dis[v], v));
                }
            }
        }
    }
}


int main()
{
    // reade();  //dfs序
    // dfs(1);
    
    
    // kk();  //kruskal


    // init();
    // reade();
    // dij(1);
    // write(dis[4]);

    return 0;
}







/*

int a[10]={1,2,3,1,4,1,4};
int b[10]={2,3,4,3,1,5,5};

7
1 2 
2 3 
3 4 
1 3 
4 1
1 5
4 5

7
1 2 1
2 3 2
3 4 3
1 3 4
4 1 5
1 5 6
4 5 7

5 7
1 2 1
2 3 2
3 4 3
1 3 4
4 1 5
1 5 6
4 5 7

5 7
1 2 1
2 3 2
3 4 3
1 3 4
4 1 5
1 5 6
4 5 7

7 9
1 6 10
1 2 28
6 5 25 
5 7 24
5 4 22
4 3 12
4 7 18
2 7 14
2 3 16

*/