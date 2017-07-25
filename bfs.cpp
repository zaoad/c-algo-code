#include<bits/stdc++.h>
using namespace std;
int level[10],vis[10];
queue<int>q;
vector<int>adj[10];
vector<int>path[10];

bfs(int source)
{
    int prev,i,j,cur;
    vis[source]=1;
    q.push(source);
    level[source]=0;
    while(!q.empty())
    {
        prev=q.front();
        q.pop();
        //cout<<adj[prev].size()<<"size"<<endl;
        for(i=0;i<adj[prev].size();i++)
        {
           cur=adj[prev][i];
           if(!vis[cur]){
                vis[cur]=1;
                q.push(cur);
                level[cur]=level[prev]+1;
                path[cur].push_back(prev);
                for(j=0;j<path[prev].size();j++)
                {
                    path[cur].push_back(path[prev][j]);
                }
          //      cout<<level[cur]<<endl;
           }
        }
    }

}
int main()
{
    int n,b,c,i,j,s,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b);
        for(j=0;j<b;j++)
        {
            scanf("%d",&c);
            adj[i].push_back(c);
        }
    }
    memset(vis,0,sizeof(vis));
    memset(level,0,sizeof(level));
    scanf("%d",&s);
    bfs(s);
    scanf("%d",&l);
    printf("%d\n",level[l]);
    cout<<path[l].size()<<endl;
    for(i=0;i<path[l].size();i++)
    {
        cout<<path[l][i]<<endl;
    }
}
