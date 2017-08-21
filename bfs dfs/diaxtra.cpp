#include<bits/stdc++.h>
#define pii pair< int , int >
#define inf 1000000007
#define mx 20007
using namespace std;
int dis[mx],n;
vector< pii >adj[mx];
priority_queue<pii>pq;
bool operator<(pii a,pii b)
{
    return a.second>b.second;
}
void clr_()
{
    int i;
    for(i=0; i<n; i++)
    {
        dis[i]=inf;
        adj[i].clear();
    }
}
void dijkstra(int source)
{
    int i,j;
    dis[source]=0;
    pq.push(make_pair(source,0));

    while(!pq.empty())
    {
        pii temp=pq.top();
        pq.pop();

        if(temp.second!=dis[temp.first])
        {
            continue;
        }
        for(i=0; i<adj[temp.first].size(); i++)
        {
            pii child=adj[temp.first][i];
            if(dis[child.first]>dis[temp.first]+child.second)
            {
                dis[child.first]=dis[temp.first]+child.second;
                pq.push(make_pair(child.first,dis[child.first]));
            }
        }
    }

}
int main()
{
    int e,u,v,c,i,j,s,d,t,k;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        scanf("%d %d %d %d",&n,&e,&s,&d);
        clr_();
        for(i=0; i<e; i++)
        {
            scanf("%d %d %d",&u,&v,&c);
            adj[u].push_back(make_pair(v,c));
            adj[v].push_back(make_pair(u,c));
        }

        dijkstra(s);
        if(dis[d]==inf)
        {
            printf("Case #%d: unreachable\n",k);
        }
        else
            printf("Case #%d: %d\n",k,dis[d]);
    }
}
