#include<bits/stdc++.h>
using namespace std;
int n,arr[100][5],dp[100][5];
int house(int ind,int c)
{
    //cout<<"iind "<<ind<<"c "<<c<<" "<<"val"<<arr[ind][c]<<endl;
    if(ind>n-1)
    {
        return 0;
    }
    if(dp[ind][c])
        return dp[ind][c];
    if(c==1)
    {
        int a= arr[ind][1]+house(ind+1,2);
        int b= arr[ind][1]+house(ind+1,3);
        return dp[ind][c]=min(a,b);
    }
    if(c==2)
    {

            int a= arr[ind][2]+house(ind+1,1);

             int b=arr[ind][2]+house(ind+1,3);
             return dp[ind][c]=min(a,b);
    }
    if(c==3)
    {
        int a= arr[ind][3]+house(ind+1,2);
         int b=arr[ind][3]+house(ind+1,1);
         return dp[ind][c]=min(a,b);
    }
}

int main()
{
    //freopen("output.txt","w",stdout);
    int t,tc;
    scanf("%d",&tc);
    for(t=1;t<=tc;t++)
    {
    int i,j;
    scanf("%d",&n);
    memset(dp,0,sizeof(dp));
    memset(arr,0,sizeof(arr));
    for(i=0;i<n;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int minind=1;
    int a=house(0,1);
    int b=house(0,2);
    int c=house(0,3);
    int ans=min(a,min(b,c));
    //cout<<"minind "<<minind<<endl;

    printf("Case %d: %d\n",t,ans);
    }
}
