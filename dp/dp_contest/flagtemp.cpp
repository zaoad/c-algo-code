#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ara[100];
ll fib(ll n)
{
    if(n==1)
        return 2;
    if(n==2)
        return 2;
    if(ara[n]!=-1)
    {
        return ara[n];
    }
    else
        ara[n]=fib(n-1)+fib(n-2);
        return ara[n];
}
int main()
{
    ll n,i;
    memset(ara,-1,sizeof(ara));
    cin>>n;
    cout<<fib(n)<<endl;
}
