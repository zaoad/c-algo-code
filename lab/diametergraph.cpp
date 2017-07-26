#include<bits/stdc++.h>
using namespace std;
int level[100007],vis[1000009];
queue<int>q;
vector<int>adj[100009];
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
int main()
{
    int n,e,u,v,i,j;
    cin>>n;
    for(i=0;i<n-1;i++)
    {
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bfs(0);
	int maxd=0,maxn=0;
	for(i=0;i<n;i++)
	{
		if(maxd<level[i])
		{
			maxd=level[i];
			maxn=i;
		}
	}
	memset(vis,0,sizeof(vis));
	memset(level,0,sizeof(level));
	bfs(maxn);
	maxd=0,maxn=0;
	for(i=0;i<n;i++)
	{
		if(maxd<level[i])
		{
			maxd=level[i];
			maxn=i;
		}
	}
	cout<<maxd<<endl;
}
