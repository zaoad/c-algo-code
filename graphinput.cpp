#include<bits/stdc++.h>
using namespace std;
#define For(i,n) for(i=0;i<n;i++)
#define mset(a,vis) memset(vis,a,sizeof(vis))
#define clr(adj,n) for(int i=0;i<n;i++){adj[i].clear();}
int vis[1000],path[1000];
vector<int>adj[100];
void clear_()
{
    mset(0,vis);
    mset(0,path);
    clr(adj,1000);
}
int main()
{
	int n,m,u,v,i,j;
	cin>>n>>m;
	For(i,m)
	{
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

	}
}
