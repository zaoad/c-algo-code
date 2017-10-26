#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string s1, s2;
int l1,l2;
int dp[1005][1005];
int AGTC(int i,int j)
{
    //cout<<i<<" "<<j<<" "<<mid<<endl;
    if(i>=j)
    {
        return 0;
    }
    //cout<<i<<" "<<j<<" "<<s1[i]<<" "<<s2[j]<<endl;
    //cout<<i<<""
    if(dp[i][j])
        return dp[i][j];
    if(s1[i]!=s1[j])
    {
       // cout<<"if "<<i<<" "<<j<<endl;
        int a=1+AGTC(i,j-1);//delete
        //cout<<"a "<<a<<endl;
        int b=1+AGTC(i+1,j);
        int c=1+AGTC(i+1,j-1);
        int d=1+AGTC(i+1,j);
        int e=1+AGTC(i,j-1);
        return dp[i][j]=min(a,min(b,min(min(c,d),e)));
    }
    else
    {
         // cout<<"else "<<i<<" "<<j<<endl;
        return dp[i][j]=AGTC(i+1,j-1);
    }
}
int main()
{
    //freopen("out.txt","w",stdout);
    int i,j,t,tc;
    char p[100];
    cin>>tc;
    //cin>>p;
    //cout<<p<<endl;
    for(t=1;t<=tc;t++)
    {
        memset(dp,0,sizeof(dp));

        //gets(p);

        //cout<<i
        cin>>s1;
 //       cout<<s1<<endl;
        l1=s1.length();
        //cout<<s1<<" "<<s2<<" "<<endl;
        // dp[l1+3][l1+3];
        int ans=AGTC(0,l1-1);
        printf("Case %d: %d\n",t,ans);
    }
}
