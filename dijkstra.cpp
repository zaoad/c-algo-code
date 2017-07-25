#include<bits/stdc++.h>
using namespace std;
struct node{
    int at, cost;
    node(int _at, int _cost)
    {
        at=_at;
        cost=_cost;
    }
};
bool operator<(node A,node B){
    return A.cost>B.cost;
}
struct edge{
    int v,w;
    edge(int _v,int _w)
    {
        v=_v;
        w=_w;
    }
};
vector<edge>adj[100];
priority_queue<node>PQ;
int dist[100];
int n;
void dijkstra(int s)
{
    for(int i =1;i<=n;i++)
    {
        dist[i]=1000000000;
    }
    dist[s]=0;
    PQ.push(node(s,0));
    while(!PQ.empty())
    {
        node u= PQ.top();
        printf(" node %d %d\n",u.at,u.cost);
        PQ.pop();
        if(u.cost !=dist[u.at])
        {
            continue;
        }
        for(edge e : adj[u.at])
        {
            if(dist[e.v]>u.cost+e.w)
            {
                dist[e.v]=u.cost+e.w;
                printf("dis %d %d\n",e.v,e.w);
                PQ.push(node(e.v,dist[e.v]));
            }
        }
    }
}
int main()
{
    int edgenumber,u,v,d,i;
    scanf("%d %d",&n,&edgenumber);
    for(i=0;i<edgenumber;i++)
    {
        scanf("%d %d %d",&u,&v,&d);
        adj[u].push_back(edge(v,d));
    }
    dijkstra(1);
    for(i=1;i<n;i++)
    {
        printf("%d\n",dist[i]);
    }
}
