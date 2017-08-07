#include<bits/stdc++.h>
using namespace std;
#define mx 1007
#define For(i,n) for(i=0;i<n;i++)
#define mset(a,vis) memset(vis,a,sizeof(vis))
#define clr(adj,n) for(int i=0;i<n;i++){adj[i].clear();}
int vis[mx],dt[mx],ft[mx],tn;
vector<int>adj[mx];
void clear_()
{
    mset(0,vis);
    mset(0,dt);
    mset(0,ft);
    clr(adj,mx);
    tn=1;
}
void dfs(int source)
{
    int i;
    for(i=0;i<adj[source].size();i++)
    {
        int newn=adj[source][i];
        if(!vis[newn])
        {
            vis[newn]=1;
            dt[newn]=tn++;
            dfs(newn);
            ft[newn]=tn++;
        }
    }
}
int main()
{
	int n,m,u,v,i,j;
	cin>>n>>m;
	clear_();
	For(i,m)
	{
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
	}
	For(i,n)
	{
        sort(adj[i].begin(),adj[i].end());
	}
	for(i=0;i<n;i++)
	{
        if(!vis[i])
        {
            vis[i]=1;
            dt[i]=tn++;
            dfs(i);
            ft[i]=tn++;
        }

	}
	for(i=0;i<n;i++)
	{
        printf("%d: %d %d\n",i,dt[i],ft[i]);

	}
}
