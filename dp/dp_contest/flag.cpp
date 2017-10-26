#include<bits/stdc++.h>
using namespace std;
long long n,dp[50][5][5];
long long flag(long long index, long long prev,long long imi)
{
    //cout<<index<<" "<<prev<<" "<<imi<<endl;
    if(index>n)
    {
        //cout<<index<<endl;
        return 1;
    }
    if(!dp[index][prev][imi])
    {
        if(imi==0)
        {
            return dp[index][prev][imi] =flag(index+1,imi,1)+flag(index+1,imi,3);
        }
        if(imi==1)
        {   int a=0;
            if(index!=n)
                a=flag(index+1,imi,2);
            return dp[index][prev][imi] =a+flag(index+1,imi,3);
        }
        else if(imi==3)
        {
            int a=0;
            if(index!=n)
            a=flag(index+1,imi,2);
            return dp[index][prev][imi] =a+flag(index+1,imi,1);
        }
        else if(imi==2&&prev==1)
        {
            return dp[index][prev][imi] =flag(index+1,imi,3);
        }
        else if(imi==2&&prev==3)
            return dp[index][prev][imi] =flag(index+1,imi,1);
    }
    else
    return dp[index][prev][imi];
}
int main()
{

    memset(dp,0,sizeof(dp));
    cin>>n;
    long long a=flag(1,0,0);
    cout<<a<<endl;
}
