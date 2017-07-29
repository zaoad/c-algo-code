#include<bits/stdc++.h>
using namespace std;
#define mx 100007
int vis[mx];
vector<int>adj[mx],topo,adj1[mx];
int numc=0;
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
void email(int source)
{
    int i;
    vis[source]=1;
    for(i=0; i<adj[source].size(); i++)
    {
        int cur=adj[source][i];
        if(!vis[cur])
        {
            //cout<<"email"<<endl;
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
    numc=0;
}

int main()
{
    int t,n,e,u,v,i,j,k,p;
    cin>>t;
    for(k=0;k<t;k++)
    {
        clear_();
        cin>>n>>e;
        if(n==0&&e==0)
            return 0;
        for(j=0; j<e; j++)
        {
            cin>>u>>v;
                adj[u].push_back(v);
                adj1[v].push_back(u);
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
        for(i=0; i<n; i++)
        {
            int cur=topo[i];
  //          cout<<"cur"<<cur<<endl;
            if(!vis[cur])
            {
//cout<<"loop"<<endl;
                email(cur);
                numc++;
            }
        }
        //cout<<cur<<endl;
        //cout<<"numberofnode"<<numberofnode<<endl;
        cout<<numc<<endl;
    }
}
