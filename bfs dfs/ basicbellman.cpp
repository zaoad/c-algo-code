#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define inf INT_MAX
int n;
vector< pii >adj[1005];
int vis[1005],dis[1005];
int bellmanford()
{
    int i,j,k;
    pii v;
    for(k=0; k<n-1; k++)
    {
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<adj[i].size(); j++)
            {
                v=adj[i][j];
                if(dis[v.first]>dis[i]+v.second)
                    dis[v.first]=dis[i]+v.second;
            }
        }
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<adj[i].size(); j++)
        {
            v=adj[i][j];
            if(dis[v.first]>dis[i]+v.second)
            return 0;
        }
    }
    return 1;

}
void clr_()
{
    memset(vis,0,sizeof(vis));
    for(int i=0;i<n;i++)
    {
        adj[i].clear();
        dis[i]=inf;
    }
}
int main()
{
freopen("input.txt","w",stdout);
    int u,v,w,i,e,t;
    cin>>t;
    while(t--)
    {
    clr_();
    cin>>n>>e;
    for(i=0;i<e;i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
    }
    dis[0]=0;
    if(bellmanford())
        cout<<"possible"<<endl;
    else
        cout<<"not possible"<<endl;
    }
}
