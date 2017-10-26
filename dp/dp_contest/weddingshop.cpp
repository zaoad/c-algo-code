#include<bits/stdc++.h>
#include<string.h>
using namespace std;
vector<int>v[100];
int budget,c;

int dp[205][25][25];
int weddingshop(int amount ,int x,int y)
{
    int i,j;
    //cout<<amount<<" "<<x<<" "<<y<<endl;
    if(x==c+1&&amount<=budget)
    {
      //  cout<<"1dokce"<<endl;
        //cout<<maxval<<endl;
        return amount;
    }
    if(x==c+1&&amount>budget)
    {
        //cout<<"2dokce"<<endl;
        return -99999;
    }
    if(amount>budget)
    {
        //cout<<"3dokce"<<endl;
        return -999999;
    }
    if(y>=v[x-1].size()+1)
    {
        //cout<<"2dokce"<<endl;
        return -9999999;
    }
    int maxval=-1;
    //cout<<x<<" "<<c<<endl;
    if(dp[amount][x][y])
        return dp[amount][x][y];
    for(i=0;i<v[x].size();i++)
    {
        maxval=max(weddingshop(amount+v[x][i],x+1,i),maxval);
    }
    return dp[amount][x][y]=maxval;
}
int main()
{
    freopen("wedding.txt","w",stdout);
    int t,tc;
    cin>>tc;

    for(t=1;t<=tc;t++)
    {

    int n,i,j,k;
        char p[10];
    cin>>budget>>c;
    //c=5;
    memset(dp,0,sizeof(dp));
    for(i=0;i<25;i++)
    {
        v[i].clear();
    }
    //maxval=-1;
    //gets(p);
    v[0].push_back(0);
    for(i=1;i<=c;i++)
    {
        cin>>k;
        for(j=0;j<k;j++)
        {
            int a;
            cin>>a;
            v[i].push_back(a);
        }
        //string line;
      //  gets(p);
        //cout<<p<<endl;
        //getline(cin,line);
        //cout<<line<<endl;
        //istringstream os(line);
        //int a;
        //while(os >> a)

    }
   // int maxval=-1;

     int ans=weddingshop(0,1,0);
    if(ans<=0)
    {
        cout<<"no solution"<<endl;
    }
    else
        cout<<ans<<endl;
    }
}
