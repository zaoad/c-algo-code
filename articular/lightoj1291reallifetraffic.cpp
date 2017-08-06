#include<bits/stdc++.h>
using namespace std;
#define mx 10007
vector<int>adj[mx];
int vis[mx],bt[mx],low[mx],parent[mx],t=0,edge[mx],n,ans=0,cnt=0;
map< pair<int ,int>, bool> mp;
//vector< pair<int ,int > >par;
void bridge(int source)
{
    int i;
    bt[source]=low[source]=t++;
    int numberofchild=0;
    for(i=0;i<adj[source].size();i++)
    {
        int newn=adj[source][i];
        if(parent[source]==newn)
        continue;
        if(vis[newn])
        {
            low[source]=min(low[source],bt[newn]);
        }
        if(!vis[newn])
        {
            vis[newn]=1;
            parent[newn]=source;
            bridge(newn);
            low[source]=min(low[source],low[newn]);
            if(bt[source]<low[newn])
            {
                cnt++;
                mp[make_pair(min(source,newn),max(source,newn))]=true;
            }
        }
    }
}
/*void dfs(int source)
{
    int i;
    for(i=0;i<adj[source].size();i++)
    {
        int newn=adj[source][i];
        if(mp[make_pair(min(i,newn),max(i,newn))])
        continue;
        if(!vis[newn])
        {
            vis[newn]=1;
            com[newn]=comnumber;
            dfs(newn);
        }
    }
}*/
void calc()
{
    int i,u,v;
    map< pair<int ,int >,bool>:: iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        pair<int ,int >pii;
        pii=it->first;
        if(mp[pii])
        {
            u=pii.first;
            v=pii.second;
            cout<<u<<" "<<v<<endl;
            edge[u]++;
            edge[v]++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(edge[i]==1&&adj[i].size()==1)
        {
            ans++;
        }
    }

}
void clr()
{
    memset(vis,0,sizeof(vis));
    memset(low,0,sizeof(low));
    memset(bt,0,sizeof(bt));
    memset(parent,0,sizeof(parent));
    memset(edge,0,sizeof(edge));
    ans=0;
    t=0;
    for(int i=0;i<mx;i++)
    {
        adj[i].clear();
    }
    mp.clear();
}
int main()
{
    int e,u,v,i,j,k,tc;
    cin>>tc;
    for(k=1;k<=tc;k++)
    {
    clr();
    cin>>n>>e;
    for(i=0;i<e;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=0;i<n;i++)
    {
        if(!vis[i])
        {
            vis[i]=1;
            bridge(i);
        }
    }
    cout<<cnt<<endl;
    calc();
    printf("Case %d: %d\n",k,(ans+1)/2);
    }
}
