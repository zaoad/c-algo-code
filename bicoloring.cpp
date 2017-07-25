#include<bits/stdc++.h>
using namespace std;
int vis[205];
queue<int>q;
vector<int>adj[205];
int g=1;
int b=2,check=0;
void bfs(int source)
{
    int prev,i,j,cur,curn;
    vis[source]=b;
    q.push(source);

    while(!q.empty())
    {
        prev=q.front();
        q.pop();

        for(i=0;i<adj[prev].size();i++)
        {
           cur=adj[prev][i];

           if(!vis[cur]){
                if(vis[prev]==b)
                {
                    vis[cur]=g;
                }
                else
                    vis[cur]=b;

                q.push(cur);

           }
           for(int j=0;j<adj[cur].size();j++)
           {
               curn=adj[cur][j];
               if(vis[curn])
               {
                   if(vis[cur]==vis[curn])
                   {
                       printf("NOT BICOLORABLE\n");
                       check=1;
                       return;
                   }
               }
           }
        }
    }

}
void clear_()
{
    memset(vis,0,sizeof(vis));
    check=0;
    for(int i=0;i<205;i++)
    {
        adj[i].clear();
    }
}
int main()
{
    int n,b,c,i,j,s,l,a,m;
    while(scanf("%d",&n)){
        if(n==0)
        break;
        clear_();
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
        }

        bfs(0);
        if(!check)
        {
        printf("BICOLORABLE\n");
        }
    }
}
