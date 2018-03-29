#include<bits/stdc++.h>
using namespace std;
int tree[10000],arr[ 10000 ];
int init(int node,int d,int e)
{
    if(d==e)
    {
        tree[node]=arr[d];
        return tree[node];
    }
    int mid=(d+e)/2;
    int left=init(node*2,d,mid);
    int right=init(node*2+1,mid+1,e);
    return tree[node]=left+right;
}
int query(int node,int l,int r,int i,int j)
{
    if(l>j||r<i)
    {
        return 0;
    }
    else if(l>=i&&r<=j)
        return tree[node];
    int mid=(l+r)/2;
    int left=query(node*2,l,mid,i,j);
    int right=query(node*2+1,mid+1,r,i,j);
    return left+right;
}
int update(int node,int l,int r,int i,int newvalue)
{
    if(l>i||r<i)
    {
        return tree[node];
    }
    else if(l==i&&r==i)
    {
        return tree[node]=newvalue;

    }
    int mid=(l+r)/2;
    int left=update(node*2,l,mid,i,newvalue);
    int right=update(node*2+1,mid+1,r,i,newvalue);
    return tree[node]=left+right;

}
int print(int n)
{   int i;
    for(i=1;i<=3*n;i++)
    cout<<tree[i]<<" ";
    cout<<endl;
}
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    init(1,1,n);
    print(n);
    cout<<query(1,1,n,5,8)<<endl;
    print(n);
    cout<<query(1,1,n,1,4)<<endl;
    print(n);
    cout<<query(1,1,n,3,4)<<endl;
    print(n);
    cout<<query(1,1,n,5,5)<<endl;
    print(n);
    update(1,1,n,5,10);
    print(n);
    cout<<query(1,1,n,5,8)<<endl;
    print(n);
    update(1,1,n,3,-5);
    cout<<query(1,1,n,1,4)<<endl;
    print(n);
    update(1,1,n,5,2);
    cout<<query(1,1,n,3,4)<<endl;
    print(n);
    update(1,1,n,6,8);
    cout<<query(1,1,n,5,5)<<endl;
}
