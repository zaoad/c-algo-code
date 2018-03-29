#include<bits/stdc++.h>
#define i64 long LONG_MAX
#define mx 1000000
using namespace std;
struct info
{
    int prop,sum;
    info()
    {
        prop=0;
        sum=0;
    }
} tree[mx*3];
int arr[1000000];
void init(int node,int d,int e)
{
    if(d==e)
    {
        tree[node].sum=arr[d];
        return ;
    }
    int left= node*2;
    int right=(node*2)+1;
    int mid=(d+e)/2;
    init(left,d,mid);
    init(right,mid+1,e);
    tree[node].sum=tree[left].sum+tree[right].sum;
}
void update(int node,int b, int e,int i, int j,int x)
{
    if(i>e||j<b)
        return;
    if(b>=i &&e<=j)
    {
        tree[node].sum+=(e-b+1)*x;
        tree[node].prop+=x;
        return;
    }
    int left= node*2;
    int right=(node*2)+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,j,x);
    update(right,mid+1,e,i,j,x);
    tree[node].sum=tree[left].sum+tree[right].sum+(e-b+1)*tree[node].prop;

}
int query(int node,int b,int e,int i,int j,int carry)
{

    if(i>e||j<b)
        return 0;
    if(b>=i&&e<=j)
    {
        return tree[node].sum+carry*(e-b+1);
    }
    int left =node<<1;
    int right =(node<<1)+1;
    int mid= (b+e)>>1;
    int p1=query(left,b,mid,i,j,carry+tree[node].prop);
    int p2=query(right,mid+1,e,i,j,carry+tree[node].prop);
    return p1+p2;
}
void print(int mxn)
{
    int i;
    for(i=0; i<=mxn; i++)
    {
        cout<<tree[i].sum<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    init(1,1,n);
        print(3*n);
    int tc,a,b,c,d;
    while(1)
    {
        cin>>a;
        if(a==1)
        {
            cin>>b>>c>>d;
            update(1,1,n,b,c,d);
            cout<<"after update"<<endl;
            print(3*n);
        }
        if(a==2)
        {
            cin>>b>>c;
            cout<<query(1,1,n,b,c,0)<<endl;
            print(3*n);

        }
        if(a==3)
            return 0;



    }
}
