#include<bits/stdc++.h>
using namespace std;
int m,n,arr[100],dp[50][50][50];
int digitcount(int num,int prev,int ind)
{

    int a,b,c,i;
    if(num>1)
    {

        if(num>=n&&abs(arr[prev]-arr[ind])<=2)
        {

            return 1;
        }
        if(abs(arr[prev]-arr[ind])>2)
            return 0;
    }
    if (dp[num][prev][ind])
        return dp[num][prev][ind];
    int sum=0;
    for(i=1; i<=m; i++)
    {
        int val=digitcount(num+1,ind,i);
        sum+=val;
    }
    return dp[num][prev][ind]=sum;

}
int main()
{
    int t,tc;
    cin>>tc;
    for(t=1; t<=tc; t++)
    {
        memset(arr,0,sizeof(arr));
        memset(dp,0,sizeof(dp));
        int i,j,a;
        cin>>m>>n;
        for(i=1; i<=m; i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            printf("Case %d: %d\n",t,m);
        }
        else
        {
            arr[0]=-100;
            int sum=0;
            int val=digitcount(0,0,1);
            printf("Case %d: %d\n",t,val);
        }
    }
}
