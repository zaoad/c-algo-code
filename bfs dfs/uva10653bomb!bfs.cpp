#include<bits/stdc++.h>
using namespace std;
#define For(i,n) for(i=0;i<n;i++)
#define mset(vis,a) memset(vis,a,sizeof(vis))
#define clr(adj,n) for(int i=0;i<n;i++){adj[i].clear();}
int vis[1005][1005],level[1005][1005],r,c;
int adj[1005][1005];
pair< int , int >previous,cur,p;
queue < pair< int , int > > q;
void bfs(pair < int , int > source)
{
    int i,j;
    int si=source.first;
    int sj=source.second;
    vis[si][sj]=1;
    q.push(source);
    level[si][sj]=0;
    while(!q.empty())
    {
        previous=make_pair(q.front().first,q.front().second);
        si=previous.first;
        sj=previous.second;
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
            if(si1>=0&&si1<r&&sj1>=0&&sj1<c)
            {

                if(vis[si1][sj1]==0&&adj[si1][sj1]==0)
                {
                    vis[si1][sj1]=1;
                    q.push(cur);
                    level[si1][sj1]=level[si][sj]+1;
                }
            }
        }
    }

}
int main()
{
    int u,v,i,j,n,m,nor,eob,bombposition,sr,sc,dr,dc;
    while(cin>>r&&cin>>c)
    {
        if(r==0&&c==0)
            return 0;
        mset(vis,0);
        mset(level,-1);
        mset(adj,0);
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>nor>>eob;
            for(j=0; j<eob; j++)
            {
                cin>>bombposition;
                adj[nor][bombposition]=1;
            }
        }
        cin>>sr>>sc>>dr>>dc;
        p=make_pair(sr,sc);
        bfs(p);
        cout<<level[dr][dc]<<endl;
    }
}
