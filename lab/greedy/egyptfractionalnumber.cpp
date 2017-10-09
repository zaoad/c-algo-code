#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
vector<pii>v;
pii p;
int gcd(int a,int b)
{
    //cout<<a<<" "<<b<<endl;
    if(a==0)
        return b;
    return gcd(b%a,a);
}
pii subtract(pii a,pii b)
{
    pii temp;
    int gd=gcd(a.second,b.second);
    temp.second=(a.second*b.second)/gd;
    temp.first=((a.first*b.second)-(b.first*a.second))/gd;
    return temp;
}
void egypt(pii n)
{
    if(n.first==0)
        return;
    if(n.first==1)
    {
        v.push_back(n);
        return ;
    }
    int i;
    //cout<<n.first<<" "<<n.second<<endl;
    int val=ceil((double)n.second/n.first);
    //cout<<"val "<<val<<endl;
    v.push_back(make_pair(1,val));
    egypt(subtract(n,make_pair(1,val)));
    return ;
}

int main()
{
    int  a,b,i,j,e;
    cin>>a>>b;
    egypt(make_pair(a,b));
    for(i=0;i<v.size();i++)
    {
        cout<<v[i].first<<"/"<<v[i].second<<endl;
    }

}
