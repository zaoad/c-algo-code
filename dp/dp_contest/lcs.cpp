#include<bits/stdc++.h>
#include<string.h>
using namespace std;
char s1[1005],s2[1005];
int l1,l2;
int dp[1005][1005];
int lcs(int i,int j)
{

    //cout<<i<<" "<<j<<endl;
    if(i>=l1||j>=l2)
        return 0;
    if(dp[i][j])
        return dp[i][j];
    if(s1[i]==s2[j])
    {
        int a=lcs(i,j+1);
        int b=lcs(i+1,j);
        int c=1+lcs(i+1,j+1);
        return dp[i][j]=max(a,max(b,c));
    }
    else
    {
        return dp[i][j]=max(lcs(i,j+1),lcs(i+1,j));
    }

}
int main()
{
    while(gets(s1))
    {
        gets(s2);
        memset(dp,0,sizeof(dp));
        l1=strlen(s1);
        l2=strlen(s2);        //cout<<"length 1 "<<l1<<"lenght 2 "<<l2<<endl;
        int ans=lcs(0,0);
        cout<<ans<<endl;
    }
}
