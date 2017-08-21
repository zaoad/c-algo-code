#include<bits/stdc++.h>
using namespace std;
int parent[200005],n;
struct edge
{
    int u,v,c;
    edge(int _u,int _v,int _c)
    {
        u=_u;
        v=_v;
        c=_c;
    }
};
bool compare(edge a,edge b)
{
    return a.c<b.c;
}
vector<edge>ed;
void makeset()
{
    for(int i=0; i<n; i++)
    {
        parent[i]=i;
    }
}
int findparent(int x)
{

    if(parent[x]==x)
        return x;
    return parent[x]=findparent(parent[x]);
}
void clr_()
{
    makeset();
    ed.clear();
}
int kruskal()
{
    int i;
    int cost=0;
    for(i=0; i<ed.size(); i++)
    {

        edge temp=ed[i];
        int a=findparent(temp.u);
        int b=findparent(temp.v);
        if(a!=b)
        {

            parent[a]=b;

            cost+=temp.c;
        }
    }
    return cost;
}
int main()
{

    int e,u,v,c,i,j,k,sum;
    while(true)
    {
        cin>>n>>e;
        if(n==0&&e==0)
            return 0;
        clr_();
        sum=0;
        for(i=0; i<e; i++)
        {
            cin>>u>>v>>c;
            ed.push_back(edge(u,v,c));
            sum+=c;
        }
        sort(ed.begin(),ed.end(),compare);

        cout<<sum-kruskal()<<endl;
    }
}
/*8
11
1 2 4
1 5 2
1 4 10
2 4 8
2 3 18
3 4 11
4 5 5
4 7 11
4 8 9
7 6 1
6 8 2*/
