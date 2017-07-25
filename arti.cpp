#include<bits/stdc++.h>
using namespace std;
int vis[100],bt[100],low[100],parent[100];
vector<int>adj[100];
int t=0;
void arti(int source)
{
    int i;
    bt[source]=low[source]=t++;

    for(i=0;i<adj[source].size();i++)
    {
        int newe=adj[source][i];
        printf("source %d newe %d bt %d low %d \n",source,newe,bt[source],low[source]);
        if(parent[source]==newe)continue;
        if(vis[newe])
        {
            cout<<"vis[newe]te dokce"<<endl;
            low[source]=min(low[source],low[newe]);
        }
        if(!vis[newe])
        {
            cout<<"else e dokce"<<endl;
            vis[newe]=1;
            parent[newe]=source;
            arti(newe);
            if(low[source]>low[newe]){
                low[source]=low[newe];
                printf("sorce %d low %d\n",source,low[source]);
            }
            if(bt[source]<=low[newe])
            {
                printf("ans %d\n\n",source);
            }
        }
    }
}
int main()
{
    int n,m,u,v,i,j;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vis[0]=1;
    arti(0);
    for(i=0;i<n;i++)
    {
        printf("node %d bt %d low %d\n",i,bt[i],low[i]);
    }
    return 0;
}
