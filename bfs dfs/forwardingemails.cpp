#include<bits/stdc++.h>
using namespace std;
#define mx 50007
int vis[mx],num[mx];
int comn=0,nmax=0,ans=0;
vector<int>adj[mx],topo,adj1[mx];
void topologicalsort(int source)
{
    int i;
    vis[source]=1;
    for(i=0;i<adj[source].size();i++)
    {
        int cur=adj[source][i];
        if(!vis[cur])
        {
            topologicalsort(cur);
           topo.push_back(cur);
        }
    }
}
int comnum=0;
void email(int source)
{
    int i;
    vis[source]=1;
    for(i=0;i<adj1[source].size();i++)
    {
        int cur=adj1[source][i];
        if(!vis[cur])
        {
            comnum++;
           //cout<<"comnum"<<comnum<<endl;
            email(cur);
            num[cur]=comnum;
        }
    }
}
void noscc(int source)
{
    int i;

    for(i=0;i<adj[source].size();i++)
    {
        int cur=adj[source][i];
        if(vis[cur])
        {
            //cout<<"vis"<<endl;
            num[source]+=num[cur];
            vis[source]=1;
           // cout<<"source "<<source<<"ivs "<<num[source]<<endl;
            return ;
        }
        if(!vis[cur])
        {
         //   cout<<"novis"<<endl;
            noscc(cur);
            num[source]+=num[cur];
            vis[source]=1;
        }
    }
}
void clear_()
{
    int i=0;
    memset(vis,0,sizeof(vis));
    memset(num,0,sizeof(num));
    for(int i=0;i<mx;i++)
    {
        adj[i].clear();
        adj1[i].clear();
    }
    topo.clear();
    comn=0;nmax=0;ans=0;
    comnum=0;
}

int main()
{
    int t,n,e,u,v,i,j,k;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        clear_();
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj1[v].push_back(u);
        }
        for(i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                topologicalsort(i);
                topo.push_back(i);
            }
        }
        reverse(topo.begin(),topo.end());
       /*for(i=0;i<n;i++)
        {
            cout<<" "<<topo[i];
        }
        cout<<endl;*/
        memset(vis,0,sizeof(vis));
        memset(num,0,sizeof(num));
        for(i=0;i<n;i++)
        {
            int cur=topo[i];
            if(!vis[cur])
            {
                comnum=1;
          //      cout<<"cur "<<cur;
                email(cur);
            //    cout<<"sesh"<<endl;
                num[cur]=comnum;
            }
        }
        /*for(i=1;i<=n;i++)
        {
            cout<<" "<<num[i]<<endl;
        }*/
        memset(vis,0,sizeof(vis));
        for(i=1;i<=n;i++)
        {
            if(num[i]>1)
            {
                vis[i]=1;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(!vis[i])
            {

                noscc(i);
                vis[i]=1;
            }
            if(nmax<num[i])
            {
                nmax=num[i];
                ans=i;
            }
        }
        /*for(i=1;i<=n;i++)
        {
            cout<<"num "<<num[i]<<endl;
        }*/
        printf("Case %d: %d\n",k,ans);
    }
}
