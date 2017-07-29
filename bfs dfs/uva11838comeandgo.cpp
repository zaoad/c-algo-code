#include<bits/stdc++.h>
using namespace std;
#define mx 3000
int vis[mx];
vector<int>adj[mx],topo,adj1[mx];
void topologicalsort(int source)
{
    int i;
    vis[source]=1;
    for(i=0; i<adj[source].size(); i++)
    {
        int cur=adj[source][i];
        if(!vis[cur])
        {
            topologicalsort(cur);
            topo.push_back(cur);
        }
    }
}
int numberofnode=1;
void email(int source)
{
    int i;
    vis[source]=1;
    for(i=0; i<adj1[source].size(); i++)
    {
        int cur=adj1[source][i];
        if(!vis[cur])
        {
            numberofnode++;
            email(cur);
        }
    }
}
void clear_()
{
    int i=0;
    memset(vis,0,sizeof(vis));
    for(int i=0; i<mx; i++)
    {
        adj[i].clear();
        adj1[i].clear();
    }
    topo.clear();
    numberofnode=1;
}

int main()
{
    int t,n,e,u,v,i,j,k,p;
    while(cin>>n>>e)
    {
        clear_();
        if(n==0&&e==0)
            return 0;
        for(j=0; j<e; j++)
        {
            cin>>u>>v>>p;
            if(p==1)
            {
                adj[u].push_back(v);
                adj1[v].push_back(u);
            }
            else if(p==2)
            {
                adj[u].push_back(v);
                adj[v].push_back(u);
                adj1[u].push_back(v);
                adj1[v].push_back(u);
            }
        }
        for(i=1; i<=n; i++)
        {
            if(!vis[i])
            {
                topologicalsort(i);
                topo.push_back(i);
            }
        }
        reverse(topo.begin(),topo.end());
        /*for(i=0; i<n; i++)
        {
            cout<<" "<<topo[i];
        }
        cout<<endl;*/
        memset(vis,0,sizeof(vis));
        int cur=topo[0];
        //cout<<cur<<endl;
        email(cur);
        //cout<<"numberofnode"<<numberofnode<<endl;
        if(n==numberofnode)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
