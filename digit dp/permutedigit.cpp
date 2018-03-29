#include<bits/stdc++.h>
using namespace std;
#define set(n,pos) (n | (1<<pos))
#define check(n,pos) (n & (1<<pos))
long long  num[20],b[20],l,mul[20];
long long dp[20][1<<19][2];
long long permute(long long  pos,long long  mask,long long  flag)
{
    if(pos==l)
        return 0;
    long long maxn=(-1)*1e28,i;
    if(dp[pos][mask][flag]!=-1)
        return dp[pos][mask][flag];
    //cout<<pos<<" "<<mask<<" "<<flag<<endl;
    if(flag==0)
    {
        for(i=0; i<l; i++)
        {
            if(!check(mask,i))
            {
                if(num[i]<b[pos])
                {
                    maxn=max(maxn,mul[pos]*num[i]+permute(pos+1,set(mask,i),1));
                }
                if(num[i]==b[pos])
                {
                    maxn=max(maxn,mul[pos]*num[i]+permute(pos+1,set(mask,i),0));
                }
            }
        }
    }
    else
    {
        for(i=0; i<l; i++)
        {
            if(!check(mask,i))
            {
                maxn=max(maxn,mul[pos]*num[i]+permute(pos+1,set(mask,i),1));
            }
        }
    }
    return dp[pos][mask][flag]=maxn;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    string first,second;
    long long  l1,l2,n,m,i,j;
    cin>>first>>second;
    l1=first.size();
    l2=second.size();
    l=l1;
    for(i=0; i<l1; i++)
    {
        num[i]=first[i]-48;
    }
    for(i=0; i<l2; i++)
    {
        b[i]=second[i]-48;
    }
    sort(num,num+l1,greater<long long >());
    mul[l1-1]=1;
    for(i=l1-2;i>=0;i--)
    {
       mul[i]=mul[i+1]*10;
    }
    if(l1<l2)
    {
        for(i=0; i<l1; i++)
        {
            cout<<num[i];
        }
        cout<<endl;
        return 0;
    }
    long long ans=permute(0,0,0);
    cout<<ans<<endl;

}
