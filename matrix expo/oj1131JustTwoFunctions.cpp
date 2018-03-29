#include<bits/stdc++.h>
using namespace std;
const int mxn = 6;
int mod;
typedef unsigned long long ll;
struct matrix
{
    ll mat[mxn][mxn];
    matrix()
    {
        memset(mat,0,sizeof(mat));
    }
};
void print(matrix a)
{
    int i,j;
    for(i=0; i<mxn; i++)
    {
        for(j=0; j<mxn; j++)
            cout<<a.mat[i][j]<<" ";

        cout<<endl;

    }

}
matrix mul(matrix a, matrix b)
{
    matrix m;
    int i,j,k;
    for(i=0; i<mxn; i++)
    {
        for(j=0; j<mxn; j++)
        {

            for(k=0; k<mxn; k++)
            {
                m.mat[i][j]+=(a.mat[i][k]*b.mat[k][j])%mod;
            }
        }

    }
    //cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    //print(m);
    return m;

}
matrix expo(matrix b,int p)
{
    //print(b);
   // cout<<p<<endl;

    matrix a;
    if(p==0)
    {
        for(int i=0; i<mxn; i++)
        {
            a.mat[i][i]=1;
        }
        //cout<<"//ret///////"<<endl;
        //print(a);
        return a;
    }
    a=expo(b,p/2);
    a=mul(a,a);
    //cout<<p<<" /////////////////////////"<<endl;
    //print(a);
    if(p%2)
    {
        a=mul(b,a);
    }
    return a;
}

main()
{
    //freopen("output.txt","w",stdout);
    int tc,t;
    cin>>tc;
    for(t=1; t<=tc; t++)
    {
        int a1,b1,c1,a2,b2,c2,q,i,j,f0,f1,f2,g0,g1,g2,n;
        cin>>a1>>b1>>c1>>a2>>b2>>c2>>f0>>f1>>f2>>g0>>g1>>g2>>mod>>q;
        matrix base,temp,sm;
        base.mat[0][0]=a1%mod;
        base.mat[0][1]=b1%mod;
        base.mat[0][5]=c1%mod;
        base.mat[1][0]=1;
        base.mat[2][1]=1;
        base.mat[3][2]=c2%mod;
        base.mat[3][3]=a2%mod;
        base.mat[3][4]=b2%mod;
        base.mat[4][3]=1;
        base.mat[5][4]=1;

        sm.mat[0][0]=f2%mod;
        sm.mat[1][0]=f1%mod;
        sm.mat[2][0]=f0%mod;
        sm.mat[3][0]=g2%mod;
        sm.mat[4][0]=g1%mod;
        sm.mat[5][0]=g0%mod;
        cout<<"Case "<<t<<":"<<endl;
        for(i=0; i<q; i++)
        {
            cin>>n;
            if(n==0)
            {
                cout<<f0%mod<<" "<<g0%mod<<endl;
                continue;
            }
            if(n==1)
            {
                cout<<f1%mod<<" "<<g1%mod<<endl;
                continue;
            }
            if(n==2)
            {
                cout<<f2%mod<<" "<<g2%mod<<endl;
                continue;
            }
            temp=expo(base,n-2);
            //cout<<".,..........................."<<endl;
            //print(temp);
            temp=mul(temp,sm);
            //cout<<"///////od//////////////////////////"<<endl;
            cout<<temp.mat[0][0]%mod<<" "<<temp.mat[3][0]%mod<<endl;
        }
        //cout<<temp.mat[0][0]<<endl;
        //temp.mat[1][0]<<endl;
    }




}
