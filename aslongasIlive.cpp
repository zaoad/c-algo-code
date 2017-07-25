#include<bits/stdc++.h>
using namespace std;
struct node{
    int id;
    int cost;
};
vector<node>adj[200];
int vis[200];
node nd[200];
int ans=0;
int non=0;
bool comparecost(node a, node b)
{
    return a.cost > b.cost;
}
void dfs(node source)
{
    int i;
    for(i=0;i<adj[source.id].size();i++)
    {
        node a=adj[source.id][i];
        if(!vis[a.id])
        {
            vis[a.id]=1;
            ans+=a.cost;
            non=a.id;
            dfs(a);
            break;
        }
    }
}
void clear_()
{
    int i;
    memset(vis,0,sizeof(vis));
    ans=0;
    non=0;
    for(i=0;i<200;i++)
    {
        adj[i].clear();
    }
}
int main()
{
    int t,n,e,u,v,i,j,c;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        clear_();
        cin>>n>>e;
        for(i=0;i<n;i++)
        {
            cin>>c;
            nd[i].id=i;
            nd[i].cost=c;
        }
        for(i=0;i<e;i++)
        {
            cin>>u>>v;
            adj[u].push_back(nd[v]);
        }
        for(i=0;i<n;i++)
        {
            sort(adj[i].begin(), adj[i].end(), comparecost);
        }
        dfs(nd[0]);
        printf("Case %d: %d %d\n",j,ans,non);
    }
}
