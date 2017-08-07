#include<bits/stdc++.h>
using namespace std;
#define For(i,n) for(i=0;i<n;i++)
#define mset(vis,a) memset(vis,a,sizeof(vis))
#define clr(adj,n) for(int i=0;i<n;i++){adj[i].clear();}
int vis[105][105],n,m;
char adj[105][105];
int ans=0;
pair<int ,int >prev,cur,p;
queue < pair<int ,int > > q;
void bfs(pair <int ,int> source)
{
    int i,j;
    int si=prev.first;
    int sj=prev.second;
    vis[si][sj]=1;
    q.push(source);
    while(!q.empty())
    {
        prev=q.front();
        si=prev.first;
        sj=prev.second;
        q.pop();
        for(i=0; i<4; i++)
        {
            if(i==0)
                cur=make_pair(si+1,sj);
            if(i==1)
                cur=make_pair(si,sj+1);
            if(i==2)
                cur=make_pair(si-1,sj);
            if(i==3)
                cur=make_pair(si,sj-1);
            int si1=cur.first;
            int sj1=cur.second;

            if(si1>=0&&si1<n&&sj1>=0&&sj1<m)
            {

                if(vis[si1][sj1]==0&&adj[si1][sj1]=='.')
                {
                    vis[si1][sj1]=1;
                    q.push(cur);
                }
            }
        }
    }

}
int main()
{
    int u,v,i,j;
    mset(vis,0);

    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>adj[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(!vis[i][j]&&adj[i][j]=='.')
            {
                ans++;
                bfs(make_pair(i,j));

            }

        }

    }
    cout<<ans<<endl;
}

