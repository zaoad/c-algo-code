#include<bits/stdc++.h>
using namespace std;
int dp[2][2][20][2];
int a[20],b[20],l;
int pallindrome(int hi,int li,int ind,int valid)
{
    //cout<<hi<<" "<<li<<" "<<ind<<" "<<valid<<endl;
    int i;
    if(ind>l/2)
    {
        //cout<<"l "<<1<<endl;
        if(hi==1)
            return 1;
        //cout<<"valid "<<valid<<endl;
        return valid;
    }
    if(dp[hi][li][ind][valid]!=-1)
        return dp[hi][li][ind][valid];
    int sum=0;
    if(hi==1)
    {
        for(i=0;i<=9;i++)
        {
            sum+=pallindrome(1,1,ind+1,1);
        }
    }
    if(hi==0&&li==1)
    {
        for(i=0; i<b[ind]; i++)
        {
            sum+=pallindrome(1,1,ind+1,valid);
        }
        if(b[ind]<b[l-ind])
            sum+=pallindrome(0,1,ind+1,1);
        else if(b[ind]>b[l-ind])
        {
            sum+=pallindrome(0,1,ind+1,0);
        }
        else if(b[ind]==b[l-ind])
        {
            sum+=pallindrome(0,1,ind+1,valid);
        }
    }
    if(hi==0&&li==0)
    {
        //cout<<"hi "<<l<<" "<<ind<<" "<<l-ind<<" "<<a[ind]<<" "<<a[l-ind]<<endl;
        if(a[ind]==b[ind])
        {
            if(b[l-ind]==a[l-ind]&&b[l-ind]==a[ind])
                sum+=pallindrome(0,0,ind+1,valid);
            else if(b[l-ind]==a[l-ind])
                sum+=pallindrome(0,0,ind+1,0);
            else if(b[l-ind]>a[l-ind])
            {
                if(a[ind]>b[l-ind])
                    sum+=pallindrome(0,0,ind+1,0);
                else if(a[ind]==b[l-ind])
                {
                    sum+=pallindrome(0,0,ind+1,valid);
                }
                else if(a[ind]<b[l-ind])
                    sum+=pallindrome(0,0,ind+1,1);
            }
        }
        if(b[ind]>a[ind])
        {
            //cout<<a[ind]<<" "<<b[ind]<<endl;
            for(i=a[ind]; i<b[ind]; i++)
            {
                sum+=pallindrome(1,1,ind+1,1);
            }
            if(b[ind]<b[l-ind])
                sum+=pallindrome(0,1,ind+1,1);
            else if(b[ind]>b[l-ind])
            {
                sum+=pallindrome(0,1,ind+1,0);
            }
            else if(b[ind]==b[l-ind])
            {
                sum+=pallindrome(0,1,ind+1,valid);
            }

        }
    }
    return dp[hi][li][ind][valid]=sum;

}
int main()
{
    //freopen("output.txt","w",stdout);
    int tc,t;
    cin>>tc;
    for(t=1; t<=tc; t++)
    {
        int f,s,l1,l2,i,j;
        string strf,strs,temp;
        cin>>strf>>strs;
        l1=strf.size();
        l2=strs.size();
        // cout<<l1<<" "<<l2<<endl;
        if(l1>l2)
        {
            //cout<<"swap"<<endl;
            temp=strf;
            strf=strs;
            strs=temp;
            swap(l1,l2);
        }
        else if(l1<l2)
        {

        }
        else if(strf>strs)
        {
            temp=strf;
            strf=strs;
            strs=temp;
        }
        //cout<<strf<<" "<<strs<<endl;
        int ans=0,ansa=0,ansb=0;
        a[0]=0;
        if(l1==1)
        {
            b[0]=strf[0]-48;
        }
        else
            b[0]=9;
        l=0;
        memset(dp,-1,sizeof(dp));
        ansa+=pallindrome(0,0,0,1);
      // cout<<ansa<<endl;
        for(i=1; i<l1; i++)
        {

            if(i==l1-1)
            {
                for(j=0; j<=i; j++)
                {
                    if(j==0)
                        a[j]=1;
                    else
                        a[j]=0;
                    b[j]=strf[j]-48;
                    l=i;
                }
            }
            else{
            for(j=0; j<=i; j++)
            {
                if(j==0)
                    a[j]=1;
                else
                    a[j]=0;
                b[j]=9;
                l=i;
            }
            }
            memset(dp,-1,sizeof(dp));
            ansa+=pallindrome(0,0,0,1);
            //cout<<ansa<<endl;
        }
        //cout<<"ansa "<<ansa<<endl;
        a[0]=0;
        if(l2==1)
        {
            b[0]=strs[0]-48;
        }
        else
            b[0]=9;
        l=0;
        memset(dp,-1,sizeof(dp));
        ansb+=pallindrome(0,0,0,1);
        //cout<<ansb<<endl;
        for(i=1; i<l2; i++)
        {

            if(i==l2-1)
            {
                for(j=0; j<=i; j++)
                {
                    if(j==0)
                        a[j]=1;
                    else
                        a[j]=0;
                    b[j]=strs[j]-48;
                    l=i;
                }
            }
            else{
            for(j=0; j<=i; j++)
            {
                if(j==0)
                    a[j]=1;
                else
                    a[j]=0;
                b[j]=9;
                l=i;
            }
            }
            //cout<<"l "<<l<<endl;
            memset(dp,-1,sizeof(dp));
            ansb+=pallindrome(0,0,0,1);
            /*for(j=0;j<=i;j++)
            {
                cout<<a[j]<<" "<<b[j]<<endl;
            }
            cout<<ansb<<endl;*/
        }
        //cout<<ansb<<endl;
        temp=strf;
        reverse(strf.begin(),strf.end());
        if(temp==strf)
            ansb++;
        printf("Case %d: %d\n",t,ansb-ansa);
    }

    /*if(l1<l2)
    {
        for(i=0; i<l1; i++)
        {
            a[i]=strf[i]-48;
            b[i]=9;
        }
        l=l1-1;
        memset(dp,-1,sizeof(dp));
        ansa+=pallindrome(0,0,0,1);
        //cout<<ans<<endl;
        for(i=1; i<l2-l1; i++)
        {
            for(j=0; j<l1+i; j++)
            {
                if(j==0)
                    a[j]=1;
                else
                    a[j]=0;
                b[j]=9;
            }
            l++;
            memset(dp,-1,sizeof(dp));
            ansa+=pallindrome(0,0,0,1);
            //cout<<ans<<endl;
        }
        for(i=0; i<l2; i++)
        {
            if(i==0)
                a[i]=1;
            else
                a[i]=0;
            b[i]=strs[i]-48;
        }
        l++;
        memset(dp,-1,sizeof(dp));
        ansa+=pallindrome(0,0,0,1);
        // cout<<ans<<endl;
    }
    if(l1==l2)
    {
        for(i=0; i<l2; i++)
        {
            a[i]=strf[i]-48;
            b[i]=strs[i]-48;
        }
        memset(dp,-1,sizeof(dp));
        l=l2-1;
        ans+=pallindrome(0,0,0,1);
        //cout<<ans<<endl;
    }*/
//    printf("Case %d: %d\n",t,ans);
}

