#include<bits/stdc++.h>
using namespace std;
int n,arr[10007],k;
int dp[105][10007];
int divisiblity(int sum,int i)
{
    //cout<<sum<<" "<<i<<endl;
    if(i>=n)
    {
        //cout<<"sum "<<sum<<" "<<endl;
        if(sum%k==0)
        {
        //cout<<"ad"<<endl;
            return 1;
        }
        else
            return 0;
    }
    if(dp[sum][i]!=-1)
        return dp[sum][i];
    else
    {
     //   vis[sum][i]=1;
        int temp1=((sum+arr[i])%k+k)%k;
        //cout<<"temp1 "<<temp1<<endl;
        int a= 0||divisiblity(temp1,i+1);
        int temp2=((sum-arr[i])%k+k)%k;
        //cout<<"temp2 "<<temp2<<endl;
        int b= 0||divisiblity(temp2,i+1);
        return dp[sum][i]=a||b;
    }
}
int main()
{
    //freopen("out.txt","w",stdout);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int i,j;
        memset(arr,0,sizeof(arr));
       // memset(vis,0,sizeof(vis));
        memset(dp,-1,sizeof(dp));
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int ans=divisiblity(0,0);
        //cout<<ans<<endl;
        if(ans)
        {
            cout<<"Divisible"<<endl;
        }
        else
            cout<<"Not divisible"<<endl;
    }
}
