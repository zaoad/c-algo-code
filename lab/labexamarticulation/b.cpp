#include<bits/stdc++.h>
using namespace std;
#define mx 100007
#define For(i,n) for(i=0;i<n;i++)
#define mset(a,vis) memset(vis,a,sizeof(vis))
#define clr(adj,n) for(int i=0;i<n;i++){adj[i].clear();}
int vis[mx],bt[mx],low[mx],parent[mx],t;
vector<int>adj[mx],point;
int root;
void clear_()
{
    mset(0,vis);
    mset(0,bt);
    mset(0,low);
    mset(-1,parent);
    point.clear();
    clr(adj,mx);
    root=0;
    t=0;
}
void arti(int source)
{
    int i;
    int numberofchild=0;
    bt[source]=low[source]=t++;
    bool flag=true;
    for(i=0; i<adj[source].size(); i++)
    {
        int newe=adj[source][i];
        if(parent[source]==newe)continue;
        if(vis[newe])
        {
            low[source]=min(low[source],bt[newe]);
        }
        if(!vis[newe])
        {

            vis[newe]=1;
            parent[newe]=source;
            arti(newe);
            if(low[source]>low[newe])
            {
                low[source]=low[newe];

            }
            if(bt[source]<low[newe])
            {
                if(source!=root&&flag)
                {
                    point.push_back(source);
                    flag=false;
                }
            }
            numberofchild+=1;

        }
    }
    if(numberofchild>1&&source==root)
            {
               point.push_back(source);
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
	for(i=0;i<n;i++)
	{
        if(!vis[i])
        {
            root=i;
            arti(i);
        }
	}
	sort(point.begin(),point.end());
	for(i=0;i<point.size();i++)
	{
        cout<<point[i]<<endl;

	}
}
