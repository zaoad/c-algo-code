
#include<bits/stdc++.h>
using namespace std;
#define mx 10007
#define pii pair <int , int >
vector<int>adj[mx];
vector< pii >bcc[mx];
int vis[mx],bt[mx],low[mx],parent[mx],t=0,edge[mx],n,ans=0,cnt=0;
pii p;
int comnumber=0;
stack< pii >st;
void bridge(int source)
{

    int i;
    bt[source]=low[source]=t++;

    for(i=0;i<adj[source].size();i++)
    {
        int newn=adj[source][i];
         parent[newn]=source;
        if(parent[source]==newn)
        continue;
        pii bedge=make_pair(min(source,newn),max(source,newn));
            st.push(bedge);
        if(vis[newn])
        {
            low[source]=min(low[source],bt[newn]);

        }
        if(!vis[newn])
        {
            vis[newn]=1;
            bridge(newn);
            low[source]=min(low[source],low[newn]);
            if(bt[source]<=low[newn])
            {
                pii x=st.top();
               while(x!=bedge)
                {

                    bcc[comnumber].push_back(x);
                    st.pop();
                    x=st.top();
                }
                bcc[comnumber].push_back(bedge);
                st.pop();
                comnumber++;

            }
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
}
int main()
{
    int e,u,v,i,j,k,tc;
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
    for(i=0;i<comnumber;i++)
    {
        cout<<"bcc com " <<i<<" ";
        for(j=0;j<bcc[i].size();j++)
        {
            pii y=bcc[i][j];
            cout<<y.first<<" "<<y.second<<" ";
        }
        cout<<endl;
    }

}
