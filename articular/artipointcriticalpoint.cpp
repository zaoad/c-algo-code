1
11
2
0 10
0 9
2
9 8
9 11
1
11 0
1
10 11
1
8 12
1
12 13
1
13 8
2
13 15
15 20
1
20 25
1
25
19
1
19 15
#include<bits/stdc++.h>
#define mx 1000
using namespace std;
int vis[mx],bt[mx],low[mx],parent[mx];
vector<int>adj[mx];
int t=0,root,cnt=0;
void arti(int source)
{
    int i;
    int numberofchild=0;
    bt[source]=low[source]=t++;
    bool flag=true;
    for(i=0; i<adj[source].size(); i++)
    {
        int newe=adj[source][i];
       // printf("source %d newe %d bt %d low %d \n",source,newe,bt[source],low[source]);
        if(parent[source]==newe)continue;
        if(vis[newe])
        {
         //   cout<<"vis[newe]te dokce"<<endl;
            low[source]=min(low[source],bt[newe]);
        }
        if(!vis[newe])
        {
           // cout<<"else e dokce"<<endl;
            vis[newe]=1;
            parent[newe]=source;
            arti(newe);
            if(low[source]>low[newe])
            {
                low[source]=low[newe];
             //   printf("sorce %d low %d\n",source,low[source]);
            }
            if(bt[source]<=low[newe])
            {
                if(source!=root&&flag)
                {
               //     printf("ans %d\n",source);
                    cnt++;
                    flag=false;
                }
            }
            numberofchild+=1;

        }
    }
    if(numberofchild>1&&source==root)
            {
                //printf("source ans %d\n",source);
                cnt++;


            }
}
void clr()
{
    int i;
    memset(vis,0,sizeof(vis));
    memset(bt,0,sizeof(bt));
    memset(low,0,sizeof(low));
    memset(parent,0,sizeof(parent));
    for(i=0;i<mx;i++)
        adj[i].clear();
    cnt=0;
    t=0;
}
int main()
{
    int n,m,u,v,i,j;
    string s,c;
    while(cin>>n)
    {
        clr();
        if(n==0)
        {
            //cout<<endl;
            return 0;
        }
        getline(cin,c);
        while(true)
        {
            getline(cin,s);
            stringstream ss;
            //cout<<s<<endl;
            ss<<s;
            ss>>u;
            if(u==0)
            break;
            while(ss>>v)
            {
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }
        for(i=1; i<=n; i++)
        {
            if(!vis[i])
            {
                root=i;
                vis[i]=1;
                arti(i);
            }
        }
        cout<<cnt<<endl;
    }
}
