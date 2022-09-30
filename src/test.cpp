#include <iostream>
#include <vector>
#include <queue>
#define MAXN int(2e5+3)

using namespace std;

long long n,m,s;
struct edge
{
    long long v,w;
};

vector<edge> adj[MAXN];

struct node
{
    long long d,id;
    bool operator < (const node& n1) const
    {
        return d>n1.d;
    }
};

long long dis[MAXN];
bool vis[MAXN];

void dijkstra(long long s)
{
    for(long long i=1;i<=n;i++)
        dis[i]=2147483647;
    priority_queue<node> q;
    dis[s]=0;
    q.push(node{0,s});
    while(!q.empty())
    {
        long long u=q.top().id;
        q.pop();
        if(vis[u])	 continue;
        vis[u]=1;
        for(long long k=0;k<(long long)adj[u].size();k++)
        {
            long long v=adj[u][k].v;
            long long w=adj[u][k].w;
            if(dis[u]+w<dis[v])
            {
                dis[v]=dis[u]+w;
                q.push(node{dis[v],v});
            }
        }
    }
}

int main()
{
    cin>>n>>m>>s;
    for(long long i=1;i<=m;i++)
    {
        long long u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(edge{v,w});
    }
    dijkstra(s);
    for(long long i=1;i<=n;i++)
        cout<<dis[i]<<" ";
    return 0;
}