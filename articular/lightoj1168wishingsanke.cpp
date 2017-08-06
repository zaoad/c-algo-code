#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int vis[1007],com[1007];
vector<int>adj[1007],adj1[1007],topo,strg[1007];
int src,comnumber=1,noe[1007],node=1;
bool flag=false;
void strongly(int source)
{
    int i;
    for(i=0;i<adj[source].size();i++)
    {
        int newn=adj[source][i];
        if(!vis[newn])
        {
            vis[newn]=1;
            strongly(newn);
            topo.push_back(newn);
        }
    }
}
void finalstrongly(int source)
{
    int i;
    for(i=0;i<adj1[source].size();i++)
    {
        int newn=adj1[source][i];
        if(!vis[newn])
        {
            if(newn==0)
            {
                src=comnumber;
            }
            vis[newn]=1;
            com[newn]=comnumber;
            //cout<<"comnewnnumber "<<newn<<"nuber"<<com[newn]<<endl;
            finalstrongly(newn);
        }
        else
        {
            if(com[source]!=com[newn])
            {
                strg[com[newn]].push_back(com[source]);
              //  cout<<"new "<<newn<<" source "<<source<<endl;
                //cout<<"newn "<<com[newn]<<" des "<<com[source]<<endl;
                noe[com[newn]]++;
                if(noe[com[newn]]>1)
                {
                    flag=true;
                }
            }
        }
    }
}
int wishnode=1;
void wish(int source)
{
    int i;
    for(i=0;i<strg[source].size();i++)
    {
        int newn=strg[source][i];
        if(!vis[newn])
        {
            //cout<<"abardoke"<<endl;
            wishnode++;
            vis[newn]=1;
            wish(newn);
        }
    }
}
void clr()
{
    int i;
    mp.clear();
    memset(vis,0,sizeof(vis));
    memset(com,0,sizeof(com));
    memset(noe,0,sizeof(noe));
    for(i=0;i<1007;i++)
    {
        adj[i].clear();
        adj1[i].clear();
        strg[i].clear();
    }
    topo.clear();
    comnumber=1;
    node=1;
    wishnode=1;
    flag=false;
}
int main()
{
    int n,e,t,u,v,i,j,k,l,cn,m;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        clr();
        cin>>n;
        for(l=0;l<n;l++)
        {
            cin>>cn;
            for(m=0;m<cn;m++)
            {
                cin>>u>>v;
                if(u==0)
                {
          //          cout<<"doka"<<endl;
                    mp[u]=0;
            //        cout<<mp[0]<<endl;
                }
                else if(!mp[u])
                {
                    mp[u]=node++;
                }
                if(!mp[v]&&v!=0)
                {
                    mp[v]=node++;
                }
                adj[mp[u]].push_back(mp[v]);
                adj1[mp[v]].push_back(mp[u]);
            }
        }
        /*for(i=0;i<node;i++)
        {
            cout<<"adj "<<i<<" ";
            for(j=0;j<adj[i].size();j++)
            {
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;

        }
        for(i=0;i<node;i++)
        {
            cout<<"adj1 "<<i<<" ";
            for(j=0;j<adj1[i].size();j++)
            {
                cout<<adj1[i][j]<<" ";
            }
            cout<<endl;

        }
        cout<<mp[0]<<"mpasfaf"<<endl;*/
        for(i=0;i<node;i++)
        {
            if(!vis[i])
            {
                vis[i]=1;
                strongly(i);
                topo.push_back(i);
            }
        }
        reverse(topo.begin(),topo.end());
        /*for(i=0;i<node;i++)
        {
            cout<<topo[i]<<" ";

        }
        cout<<endl;*/
        memset(vis,0,sizeof(vis));
        for(i=0;i<node;i++)
        {

            int tp=topo[i];
            if(!vis[tp])
            {
                if(tp==0)
                {
                    src=comnumber;
                }
                //cout<<"tp    "<<tp<<endl;
                //cout<<"comn"<<comnumber<<endl;
                vis[tp]=1;
                com[tp]=comnumber;
                finalstrongly(tp);
                comnumber++;
            }
        }
        //cout<<"coma=anumber"<<comnumber<<endl;
        memset(vis,0,sizeof(vis));
        /*for(i=1;i<comnumber;i++)
        {
            cout<<"strg"<<i<<" ";
            for(j=0;j<strg[i].size();j++)
            {
                cout<<strg[i][j]<<" ";
            }
            cout<<endl;
        }*/
        memset(vis,0,sizeof(vis));
        vis[src]=1;
        //cout<<"src"<<src<<endl;
        wish(src);
        //cout<<"comnumber"<<comnumber<<"wishnumber"<<wishnode<<endl;
        if(flag)
            printf("Case %d: NO\n",k);
        else if(wishnode+1==comnumber)
        printf("Case %d: YES\n",k);
        else
        printf("Case %d: NO\n",k);
    }
}
