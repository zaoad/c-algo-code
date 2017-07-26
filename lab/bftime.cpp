#include<bits/stdc++.h>
using namespace std;
int vis[1005],bt[1005],ft[1005],cm[1005];
queue<int>q;
vector<int>adj[1005];
int t=1;
void bftime(int source,int com)
{
    if(t>13)
    return;
    int i;
    cm[source]=com;
    bt[source]=t++;
    for(i=0; i<adj[source].size(); i++)
    {
        int newe =adj[source][i];
        if(!vis[newe])
        {
            vis[newe]=1;
            bftime(newe,com);
        }
    }
    ft[source]=t++;
}
void clear_()
{
    memset(vis,0,sizeof(vis));
    for(int i =1; i<1005; i++)
    {
        adj[i].clear();
    }
}
int main()
{
    int n,m,u,v,i,j;
    cin>>n>>m;
    clear_();
    for(i=0; i<m; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int c=1;
    for(i=0;i<n;i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            bftime(i,c++);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d: %d %d %d\n",i,cm[i],bt[i],ft[i]);

    }
}
