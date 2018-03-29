#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
string num;
int k,l;
int dp[1007][1007][2],vis[1007][1007][2];
int sales(int n)
{
    if(n==0)
        return 0;
    if(n<=1)
        return 1;
    return 1+sales(__builtin_popcountll(n))%mod;
}
int digitdp(int sum,int ind,int flag)
{
    //cout<<sum<<" "<<ind<<" "<<flag<<endl;
    if(ind==l)
    {
        int mul=sales(sum);
        if(mul==k)
            return 1;
        else
            return 0;
    }
    if(vis[sum][ind][flag])
    {
        return dp[sum][ind][flag];
    }
    vis[sum][ind][flag]=1;
    if(flag)
    {
        return dp[sum][ind][flag]=(digitdp(sum+1,ind+1,1)%mod+digitdp(sum,ind+1,1)%mod)%mod;
    }
    if(num[ind]=='1')
        return dp[sum][ind][flag]=(digitdp(sum+1,ind+1,0)%mod+digitdp(sum,ind+1,1)%mod)%mod;
    else
        return dp[sum][ind][flag]=digitdp(sum,ind+1,0)%mod;

}
int main()
{
    //int n,r;
    //int ans=fact(10,4);
    //cout<<ans<<endl;
    int i,j,n,a,b,mul,ans=0;
    cin>>num;
    cin>>k;
    int cnt=0,checkz=-1;
    l=num.size();
    if(k==0)
    {
        cout<<1<<endl;
        return 0;
    }
    if(l==1&&num[0]=='1')
    {
        cout<<0<<endl;
        return 0;
    }
    ans=digitdp(0,0,0);
    if(k==1)
        cout<<ans-1<<endl;
    else
        cout<<ans<<endl;


}
/*10000000000000000000000000000
1*/

