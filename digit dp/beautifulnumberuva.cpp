#include<bits/stdc++.h>
#define set(n,pos) ( n | 1<<pos)
#define check(n,pos) ( n & 1<<pos)
#define mod 1000000007
using namespace std;
int m,n,l,val;
int dp[11][105][2050];
int digitdp(int prev,int ind,int mask)
{
    //cout<<prev<<" "<<ind<<" "<<mask<<" "<<dp[prev][ind][mask]<<endl;
    int a=0,b=0,c=0,i;
    if(ind>=m-1)
    {
       // cout<<" mask "<<mask<<endl;
        if(mask==val)
        {
        return 1;
        }
        return 0;
    }
   // cout<<"ki hocce"<<endl;
    if(mask==val)
        c=1;
    if(dp[prev][ind][mask]!=-1)
    {
        //cout<<prev<<" "<<ind<<" "<<mask<<" df "<<dp[prev][ind][mask]<<endl;
        return dp[prev][ind][mask];
    }
    if(prev-1>=0)
        a=digitdp(prev-1,ind+1,set(mask,prev-1))%mod;
    if(prev+1<=n-1)
    {
       // cout<<"eisob amr dara hobe na"<<endl;
        b=digitdp(prev+1,ind+1,set(mask,prev+1))%mod;
        }
    //c=digitdp(0,ind+1,set(mask,0))%mod;
    return dp[prev][ind][mask]=(a+b+c)%mod;

}
int main()
{
    int tc,i,j;;
    cin>>tc;
    int mul[11];
    mul[1]=2;
    for(i=2;i<=10;i++)
    {
        mul[i]=2*mul[i-1];
    }
    while(tc--)
    {


    cin>>n>>m;
    int sum=0;
    if(n>m)
    {
        cout<<0<<endl;
        continue;
    }
    val=mul[n]-1;
    //cout<<val<<endl;

        memset(dp,-1,sizeof(dp));
        for(i=1;i<n;i++)
            sum=(sum+digitdp(i,0,set(0,i))%mod)%mod;

    cout<<sum<<endl;
    }
}
