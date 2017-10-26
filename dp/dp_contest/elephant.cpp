#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int dir[1005];
struct el
{
    int index;
    int weight;
    int iq;
    el(int i,int w,int q)
    {
        index=i;
        weight=w;
        iq=q;
    }
};
vector<el>v;
int compare(el a,el b)
{
    return a.weight<b.weight;

}
int n,start;

int elephant(int prev,int ind)
{
    //cout<<ind<<" "<<v[ind].index<<" "<<v[ind].weight<<endl;
    int i;
    if(ind>=n)
    {
        return 0;
    }
    if(dp[prev][ind])
        return dp[prev][ind];
    if((v[prev].weight<v[ind].weight)&&(v[prev].iq>v[ind].iq))
    {
        if(1+elephant(ind,ind+1)>elephant(prev,ind+1)){
            dir[prev]=ind;
            //start=prev;
            }
        return dp[prev][ind]=max(elephant(prev,ind+1),1+elephant(ind,ind+1));
    }
    else
        return dp[prev][ind]=elephant(prev,ind+1);
}
void print(int start)
{
    if(dir[start]==0)
     return ;
    cout<<v[dir[start]].index<<endl;
    print(dir[start]);

}
int main()
{
    //freopen("input.txt","r",stdin);
    memset(dp,0,sizeof(dp));
    //freopen("out.txt","w",stdout);
    int i,a,b,c;
    //cin>>n;
    n=0;
    //v.push_back(el(3,0,0));
    while(cin>>b)
    {
        n++;
        cin>>c;
        //cout<<b<<" "<<c<<endl;
        v.push_back(el(n,b,c));
    }
    sort(v.begin(),v.end(),compare);
    /*for(i=0; i<n; i++)
    {
        cout<<v[i].index<<" "<<v[i].weight<<" "<<v[i].iq<<endl;
    }*/
    //cout<<n<<endl;
    int ans=0;
    for(i=0;i<n;i++)
    {
        if(elephant(i,i)>ans)
        {
            ans=elephant(i,i);
            start=i;
        }
    }
    cout<<ans+1<<endl;
    cout<<v[start].index<<endl;
    print(start);
}
