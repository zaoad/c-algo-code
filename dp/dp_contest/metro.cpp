#include<bits/stdc++.h>
using namespace std;
int n,m,cross[1007][1007];
double dpar[1007][1007];
double dp(int x,int y)
{
    double a,b;
    //cout<<x<<" "<<y<<endl;
    if(dpar[x][y])
        return dpar[x][y];
    if(x==m&&y==n)
        return 0;
    else if(x==m&&y<n)
    {
        return dpar[x][y]=100+dp(x,y+1);
    }
    else if(x<m&&y==n)
    {
        return dpar[x][y]=100+dp(x+1,y);
    }
    b=min((double)100+dp(x+1,y),(double)100+dp(x,y+1));
    if(cross[x+1][y+1])
    {
        return dpar[x][y]=min(sqrt(20000)+dp(x+1,y+1),b);
    }
    else
        return dpar[x][y]=b;
}
int main()
{
    memset(cross,0,sizeof(cross));
    memset(dpar,0,sizeof(dpar));
    int i,j,k,a,b;
    cin>>m>>n>>k;
    for(i=0;i<k;i++)
    {
        cin>>a>>b;
        cross[a][b]=1;
    }
    double ans=dp(0,0);
    ans=round(ans);
    cout<<ans<<endl;
}
