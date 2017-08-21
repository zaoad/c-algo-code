#include<bits/stdc++.h>
using namespace std;
#define inf 10000007
int dis[105][105];
void floidwarshall(int n)
{
    int i,j,k;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            for(k=1; k<=n; k++)
            {

                if(dis[i][j]>dis[i][k]+dis[k][j])
                {

                    dis[i][j]=dis[i][k]+dis[k][j];

                }
            }
        }
    }
}
void clr_(int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            dis[i][j]=inf;

        }

    }
}

int main()
{
    int i,j,e,v,w,n,u,o,s,d,t,k,l,T;
    freopen("input.txt","w",stdout);
    cin>>t;
    while(t--)
    {
        int cnt=0;
        cin>>n>>T>>l>>e;
        clr_(n);
        for(i=0; i<e; i++)
        {
            cin>>u>>v>>w;
            dis[u][v]=w;
        }

        floidwarshall(n);
        for(i=1; i<=n; i++)
        {
            if(dis[i][l]<=T)
                cnt++;
        }
        if(dis[l][l]<=T)
        cnt--;
        cout<<cnt<<endl<<endl;
    }
}
