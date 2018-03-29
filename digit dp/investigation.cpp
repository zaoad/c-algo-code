#include<bits/stdc++.h>
using namespace std;
int sm[10],vm[10],n,k,l1,l2;
string a,b,temp="";
int dp[12][1000][100][2][2];
//bool vis[10][10007][90][2][2];
int digitdp(int i,int summod,int valmod,int highflag,int lowflag)
{
    //cout<<i<<" "<<summod<<" "<<valmod<<endl;
    if(i==0)
    {
        //cout<<"base "<<endl;
        if(summod==0&&valmod==0)
            return 1;
        else
            return 0;
    }
    if(dp[i][summod][valmod][highflag][lowflag]!=-1)
        return dp[i][summod][valmod][highflag][lowflag];
    int j;
    int sum=0;
    bool h,l;
    int low,high;
    if(highflag&&lowflag)
    {
        //cout<<"1 1 "<<temp[l2-i]-48<<" "<<b[l2-i]-48<<endl;
        low=0;
        high=10;
    }
    if((highflag==1)&&(lowflag==0))
    {
        //cout<<"1 0 "<<temp[l2-i]-48<<" "<<b[l2-i]-48<<endl;
        low=temp[l2-i]+1-48;
        high=10;
        sum+=digitdp(i-1,(summod+((temp[l2-i]-48)*(sm[i]))%k)%k,(valmod+(temp[l2-i]-48)%k)%k,1,0);
    }
    if(highflag==0&&lowflag==0)
    {
        //cout<<"0 0 "<<temp[l2-i]-48<<" "<<b[l2-i]-48<<endl;
        low=temp[l2-i]+1-48;
        high=b[l2-i]-48;
        if(temp[l2-i]==b[l2-i])
            sum+=digitdp(i-1,(summod+((temp[l2-i]-48)*(sm[i])%k))%k,(valmod+(temp[l2-i]-48)%k)%k,0,0);
        else
        {
            sum+=digitdp(i-1,(summod+((temp[l2-i]-48)*(sm[i]%k)))%k,(valmod+(temp[l2-i]-48)%k)%k,1,0);
            sum+=digitdp(i-1,(summod+((b[l2-i]-48)*sm[i])%k)%k,(valmod+(b[l2-i]-48))%k,0,1);
        }
    }
    if(highflag==0&&lowflag==1)
    {
        //cout<<"0 1 "<<temp[l2-i]-48<<" "<<b[l2-i]-48<<endl;
        low=0;
        high=b[l2-i]-48;
        sum+=digitdp(i-1,(summod+((b[l2-i]-48)*sm[i])%k)%k,(valmod+(b[l2-i]-48))%k,0,1);

    }
    for(j=low; j<high; j++)
    {
        //cout<<i<<" j "<<j<<endl;
        sum+=digitdp(i-1,(summod+(j*sm[i])%k)%k,(valmod+(j))%k,1,1);
    }
    return dp[i][summod][valmod][highflag][lowflag]=sum;
}
int main()
{
    //freopen("output.txt","w",stdout);
    int tc,t;
    cin>>tc;
    for(t=1; t<=tc; t++)
    {
        memset(dp,-1,sizeof(dp));
        int i;
        temp="";
        cin>>a>>b>>k;
        if(k>100)
        {
            printf("Case %d: 0\n",t);
            continue;
        }
        l1=a.size();
        l2=b.size();
        for(i=0; i<l2-l1; i++)
        {
            temp+='0';
        }
        for(i=0; i<l1; i++)
        {
            temp+=a[i];
        }
        // cout<<temp<<endl;
        sm[1]=1;
        int mul=1;
        for(i=2; i<=10; i++)
        {
            mul=(mul*(10))%k;
            sm[i]=mul;
        }
        //cout<<sm[l2]<<endl;
        int ans=digitdp(l2,0,0,0,0);
        printf("Case %d: %d\n",t,ans);
    }
}
