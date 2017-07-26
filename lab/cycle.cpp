#include<bits/stdc++.h>
using namespace std;
int vis[1005];
queue<int>q;
vector<int>adj[1005],tp;
int t=1;
void topo(int source)
{
    for(int i=0;i<adj[source].size();i++)
    {
        int newe =adj[source][i];
        if(!vis[newe])
        {
            vis[newe]=1;
            topo(newe);
            tp.push_back(newe);
        }
    }
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

    }
    for(i=0;i<n;i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            topo(i);
            tp.push_back(i);
        }
    }
    for(i=n-1;i>=0;i--)
    {
        cout<<tp[i]<<" ";
    }
    cout<<endl;
    return 0;
}

