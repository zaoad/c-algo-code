#include<bits/stdc++.h>
using namespace std;
const int mxn = 2;
typedef unsigned long long ull;
struct Matrix
{
    ull mat[mxn][mxn];
};
Matrix mul(Matrix a , Matrix b)
{
    Matrix ans;
    for(int i = 0; i < mxn; i++)
    {
        for(int j = 0; j < mxn; j++)
        {
            ans.mat[i][j] = 0;
            for(int k = 0; k < mxn; k++)
            {
                ans.mat[i][j] += a.mat[i][k]*b.mat[k][j];
            }
        }
    }
    return ans;
}
Matrix expo(Matrix base , int p)
{
    if(p==0)
    {
        Matrix ret;
        for(int i = 0; i < mxn; i++)
        {
            for(int j = 0; j < mxn; j++)
            {
                ret.mat[i][j] = (i==j);
            }
        }
        return ret;
    }
    Matrix x = expo(base , p/2);
    x= mul(x , x);
    if(p&1)
    {
        x = mul(x , base);
    }
    return x;
}
int main()
{
    int tc;
    cin>>tc;
    int cs = 0;
    while(tc--)
    {
        cs++;
        ull a , b;
        int n;
        cin>>a>>b>>n;
        Matrix bs;
        bs.mat[0][0] = a;
        bs.mat[0][1] = (-1)*b;
        bs.mat[1][0] = 1;
        bs.mat[1][1] = 0;
        if(n==0)
        {
            cout<<"Case "<<cs<<": "<<2<<endl;
        }
        else if(n==1)
        {
            cout<<"Case "<<cs<<": "<<a<<endl;
        }
        else
        {
            ull ar[mxn] = {a , 2};
            n-=1;
            Matrix ret= expo(bs , n);
            ull ans =0;
            for(int i=0; i < mxn; i++)
            {
                ans += ar[i]*ret.mat[0][i];
            }
            cout<<"Case "<<cs<<": "<<ans<<endl;
        }

    }
    return 0;
}
