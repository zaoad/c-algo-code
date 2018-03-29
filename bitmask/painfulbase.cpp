    #include<bits/stdc++.h>
    using namespace std;
    #define set(n,pos) (n | (1<<pos))
    #define check(n,pos) (n & (1<<pos))
    int mod,base,num[20],limit;
    long long dp[1<<17][30];
    char temp[100];
    string s;
    int l;
    void  convertint()
    {
        int sum=0,r,i=0;
        for(i=0;i<l;i++)
        {
            int a=s[i];
            if(a<58)
            {
                a=a-48;
                num[i]=a;
            }
            else
            {
                a=a-55;
                num[i]=a;
            }
        }
       // cout<<sum<<endl;
    }
    long long permute(int mask,int r)
    {
        //cout<<mask<<" "<<r<<" "<<k<<endl;
        if(mask==limit)
        {
            if(r==0)
                return 1;
            else
                return 0;
        }
        if(dp[mask][r]!=-1)
        {
            //cout<<"jhamela"<<endl;
            return dp[mask][r];
        }
        int j;
        long long cnt=0;
        for(j=0;j<l;j++)
        {
            if(!check(mask,j))
            {
                int a=((r*base)%mod+num[j]%mod)%mod;
                //cout<<r<<" "<<base<<" "<<num[j]<<" "<<mod<<endl;
                cnt+=permute(set(mask,j),a);
            }

        }
        return dp[mask][r]=cnt;
    }
    int main()
    {
       // freopen("oj1021.txt","w",stdout);
        int t,tc;
        cin>>tc;
        for(t=1;t<=tc;t++)
        {
        memset(dp,-1,sizeof(dp));
        memset(num,0,sizeof(num));
        //freopen("out.txt", "w", stdout);
        cin>>base>>mod>>s;
        l=s.size();
        limit=0;
        for(int i=0;i<l;i++)
        {
            limit=set(limit,i);
            //cout<<limit<<endl;
        }
        //cout<<limit<<endl;
        //cout<<l<<endl;
        convertint();
        long long ans=permute(0,0);
        printf("Case %d: %lld\n",t,ans);
        }

    }


