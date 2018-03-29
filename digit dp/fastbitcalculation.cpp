#include<bits/stdc++.h>
using namespace std;
int num[40],l,val[40],mul[40];
long long dp[40][5][5];
long long digitdp(int i,int prev,int flag)
{
    //cout<<i<<" "<<prev<<" "<<flag<<endl;
    if(i==l)
    {
        return 0;
    }
    if(dp[i][prev][flag]!=-1)
        return dp[i][prev][flag];
    long long a=0,b=0;
    if(flag==0)
    {
        if(prev==1)
        {
            if(num[i]==1)
            {
                //cout<<val[i+1]<<" "<<i<<endl;
                a=val[i+1]+1+digitdp(i+1,1,0);
                b=digitdp(i+1,0,1);
            }
            else
            {
                b=digitdp(i+1,0,0);
            }
        }
        else
        {
            if(num[i]==1)
            {

                a=digitdp(i+1,1,0);
                b=digitdp(i+1,0,1);
            }
            else
            {
                b=digitdp(i+1,0,0);
            }


        }
        return dp[i][prev][flag]=a+b                                                                              ;
    }
    else
    {
        if(prev==1)
        {
            //cout<<mul[i]<<"   "<<i<<endl;
            a=mul[i]+digitdp(i+1,1,1);
            b=digitdp(i+1,0,1);
        }
        else
        {
            a=digitdp(i+1,1,1);
            b=digitdp(i+1,0,1);
        }
        return dp[i][prev][flag]=a+b;
    }
}
void makebinary(int n,int l)
{
    for(int i=l-1; i>=0; i--)
    {
        num[i]=n%2;
        n=n/2;
    }
}
int main()
{
    int tc,t;
    cin>>tc;
    for(t=1; t<=tc; t++)
    {
        memset(dp,-1,sizeof(dp));
        int n,i,j,k;
        cin>>n;
        if(n==0)
        {
            printf("Case %d: 0\n",t);
            continue;
        }
        l=floor(log2(n))+1;
        //cout<<l<<endl;
        makebinary(n,l);
        int m=1;
        mul[l-1]=1;
        for(i=l-2; i>=0; i--)
        {
            mul[i]=m*2;
            m=m*2;
        }
        val[l-1]=num[l-1]*mul[l-1];
        for(i=l-2; i>=0; i--)
        {
            val[i]=mul[i]*num[i]+val[i+1];
        }
        val[l]=0;
        mul[l]=0;
        num[l]=0;
        long long a=digitdp(0,0,0);
        printf("Case %d: %lld\n",t,a);
    }


}

