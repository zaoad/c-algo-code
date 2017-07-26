#include<bits/stdc++.h>
using namespace std;
int level[100005],vis[100005];
queue<int>q;
vector<int>adj[100005];
void bfs(int source)
{
    int prev,i,j,cur;
    vis[source]=1;
    q.push(source);
    level[source]=0;
    while(!q.empty())
    {
        prev=q.front();
        q.pop();
        for(i=0;i<adj[prev].size();i++)
        {
           cur=adj[prev][i];
           if(!vis[cur]){
                vis[cur]=1;
                q.push(cur);
                level[cur]=level[prev]+1;

           }
        }
    }

}
void clear_()
{
    memset(vis,0,sizeof(vis));
    memset(level,0,sizeof(level));
    for(int i =1;i<100005;i++)
    {
        adj[i].clear();
    }
}
int main()
{
    int n,m,u,v,i,j;
    cin>>n>>m;
    clear_();
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    bfs(0);
    for(i=0;i<n;i++)
    {
        if(!vis[i])
        {
            printf("%d: Not Reachable\n",i);
            continue;
        }
        printf("%d: %d\n",i,level[i]);
    }
}
