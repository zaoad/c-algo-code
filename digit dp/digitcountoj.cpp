#include<bits/stdc++.h>
using namespace std;
int n,m,num[10],dp[11][11],vis[11][11];
int digitdp(int ind,int val)
{
    //cout<<ind<<" "<<val<<endl;
    if(ind==n)
        return 1;
    int j,sum=0;
    if(vis[ind][val])
        return dp[ind][val];
    vis[ind][val]=1;
    for(j=0; j<m; j++)
    {
        if(abs(num[j]-val)<=2)
        {
            //cout<<num[j]<<endl;
            sum+=digitdp(ind+1,num[j]);
        }
    }
    return dp[ind][val]=sum;
}
int main()
{
    int tc,t;
    cin>>tc;
    for(t=1; t<=tc; t++)
    {
        memset(vis,0,sizeof(vis));
        memset(dp,0,sizeof(dp));
        int i,j;
        cin>>m>>n;
        for(i=0; i<m; i++)
        {
            cin>>num[i];
        }
        int sum=0;
        for(i=0; i<m; i++)
        {
            sum+=digitdp(1,num[i]);
        }
        printf("Case %d: %d\n",t,sum);
    }
}
