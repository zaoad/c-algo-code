#include<bits/stdc++.h>
using namespace std;
const int mxn = 2;
typedef unsigned long long ll;
struct matrix{
    ll mat[mxn][mxn];
    matrix()
    {
    memset(mat,0,sizeof(mat));
    }
};
void print(matrix a)
{
    int i,j;
    for(i=0;i<mxn;i++)
    {
        for(j=0;j<mxn;j++)
            cout<<a.mat[i][j]<<" ";

        cout<<endl;

    }

}
matrix mul(matrix a, matrix b)
{
    matrix m;
    int i,j,k;
    for(i=0;i<mxn;i++)
    {
        for(j=0;j<mxn;j++)
        {

            for(k=0;k<mxn;k++)
            {
                m.mat[i][j]+=a.mat[i][k]*b.mat[k][j];
            }
        }

    }
   // print(m);
    return m;

}
matrix expo(matrix b,int p)
{
    //print(b);
    //cout<<p<<endl;

    matrix a;
    if(p==0)
    {
        for(int i=0;i<mxn;i++)
        {
            a.mat[i][i]=1;
        }
      //  cout<<"//ret///////"<<endl;
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
    for(t=1;t<=tc;t++)
    {
    int p,q,n;
    cin>>p>>q>>n;
    matrix base,temp,sm;
    base.mat[0][0]=p;
    base.mat[0][1]=-q;
    base.mat[1][0]=1;
    base.mat[1][1]=0;
    temp=expo(base,n);
    //print(temp);
    sm.mat[0][0]=p;
    sm.mat[1][0]=2;
    sm.mat[0][1]=0;
    sm.mat[1][1]=0;
    temp=mul(temp,sm);
    //cout<<temp.mat[0][0]<<endl;
    cout<<"Case "<<t<<": "<<temp.mat[1][0]<<endl;
    }




}
