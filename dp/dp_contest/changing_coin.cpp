#include<bits/stdc++.h>
using namespace std;
int maxval=1000000,indexno=-1,n,total,arr[107];
pair<int ,int> dp[10007][107][107];
pair<int,int> change_coin(int amount,int nocoin,int ind)
{
    int i;
    //cout<<"amount "<<amount<<" nocoin "<<nocoin<<"ind "<<ind<<endl;
    if(!(dp[amount][nocoin][ind].first==0&&dp[amount][nocoin][ind].first==0))
    {
        printf("a;dfjasf");
        return dp[amount][nocoin][ind];
    }
    if(ind>n)
    {
        return make_pair(0,0);
    }
    if(amount>=total)
    {
        //cout<<"amount "<<amount<<" "<<"maxval"<<maxval<<endl;
        if(amount<=maxval)
        {
            //if(amount==maxval&&nocoin<indexno)
              //  indexno=nocoin;
            //else{
            maxval=amount;
            indexno=nocoin;
            return make_pair(maxval,indexno);
            //}
        }
    }
    for(i=ind; i<n; i++)
    {
        return dp[amount][nocoin][ind]=change_coin(amount+arr[i],nocoin+1,ind+1);
    }
    return dp[amount][nocoin][ind]=change_coin(amount,nocoin,ind+1);
}
int main()
{
    freopen("input.txt","r",stdin);
    int t,tc;
    cin>>tc;
    for(t=1; t<=tc; t++)
    {
        maxval=1000000;
        indexno=-1;
        memset(arr,0,sizeof(arr));
        memset(dp,0,sizeof(dp));
        int i;
        cin>>total>>n;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        //for(i=0;i<n;i++)
        //{
        pair<int,int > p=change_coin(0,0,0);
        //}
        cout<<maxval<<" "<<indexno<<endl;
    }
}
