#include<bits/stdc++.h>
using namespace std;
int vis[1005];
queue<int>q;
vector<int>adj[1005],adj1[1005],stc,tp;
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
void strgtopo(int source)
{
    stc.push_back(source);
    for(int i=0;i<adj1[source].size();i++)
    {
        int newe =adj1[source][i];
        if(!vis[newe])
        {
            vis[newe]=1;
            strgtopo(newe);
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
    stc.clear();
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
        adj1[v].push_back(u);
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
    reverse(tp.begin(), tp.end());
    memset(vis,0,sizeof(vis));
    for(i=0;i<n;i++)
    {   int stn=tp[i];
        if(!vis[stn])
        {
            stc.clear();
            vis[stn]=1;
            strgtopo(stn);
        }
        for(j=0;j<stc.size();j++)
        {
            cout<< stc[j]<<" ";
        }
        cout<<endl;
    }
}
