#include<bits/stdc++.h>
using namespace std;
int r,c,arr[107][107],dp[107][107];
int monkeybanana(int x,int y)
{

    int nx=r-x%r;
    //cout<<x<<" "<<y<<endl;
    if(y>x||y<0||(x>r-1&&y>nx-1))
        return 0;
    if(x>2*r-2)
        return 0;
    if(dp[x][y])
        return dp[x][y];

    //cout<<x<<" "<<y<<" "<<arr[x][y]<<endl;
    if(x<r-1)
    {
        int a=monkeybanana(x+1,y);
        int b=monkeybanana(x+1,y+1);
        return dp[x][y]=arr[x][y]+max(a,b);
    }
    else
    {
        int a=monkeybanana(x+1,y-1);
        int b=monkeybanana(x+1,y);
        return dp[x][y]=arr[x][y]+max(a,b);
    }

}
int main()
{
    int t,tc;
    scanf("%d",&tc);
    for(t=1; t<=tc; t++)
    {
        int i,j;
        memset(dp,0,sizeof(dp));
        memset(arr,0,sizeof(arr));
        scanf("%d",&r);
        for(i=0; i<r; i++)
        {
            for(j=0; j<=i; j++)
            {
                scanf("%d",&arr[i][j]);
                //cout<<"print "<<i<<" "<<j<<arr[i][j]<<endl;
            }
        }
        //cout<<"out of first loop"<<endl;
        for(i=0; i<r-1; i++)
        {
            for(j=0; j<r-1-i; j++)
            {
                scanf("%d",&arr[i+r][j]);
            }
        }
        int n=monkeybanana(0,0);
        printf("Case %d: %d\n",t,n);
    }
    //cout<<"out of second loop"<<endl;


}
