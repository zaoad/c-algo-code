#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string s1, s2;
int l1,l2;
int dp[1000][1000];
int AGTC(int i,int j)
{
    //cout<<i<<" "<<j<<" "<<endl;
    if(i>=l1)
    {
        return l2-j;
    }
    if(j>=l2)
    {
        return l1-i;
    }
    //cout<<i<<" "<<j<<" "<<s1[i]<<" "<<s2[j]<<endl;
    //cout<<i<<""
    if(dp[i][j])
        return dp[i][j];
    if(s1[i]!=s2[j])
    {
        //cout<<"if "<<i<<" "<<j<<endl;
        int a=1+AGTC(i+1,j);
        int b=1+AGTC(i,j+1);
        int c=1+AGTC(i+1,j+1);
        return dp[i][j]=min(a,min(b,c));
    }
    else
    {
      //  cout<<"else "<<i<<" "<<j<<endl;
        return dp[i][j]=AGTC(i+1,j+1);
    }
}
int main()
{
   //freopen("out.txt","w",stdout);
    int i,j;
    char p[100];
    while(cin>>l1)
    {
    memset(dp,0,sizeof(dp));

    //gets(p);

        //cout<<i
        cin>>s1;

    cin>>l2;
    //gets(p);
        cin>>s2;
        //cout<<s1<<" "<<s2<<" "<<endl;
        //dp[l1+3][l2+3];
    int ans=AGTC(0,0);
    cout<<ans<<endl;
    }
}
