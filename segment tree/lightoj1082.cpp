#include<bits/stdc++.h>
using namespace std;
int tree[300007],arr[100007];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return ;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=min(tree[left],tree[right]);
}
int query(int node,int b,int e,int i,int j)
{
    if(e<i||b>j)
    {
        //cout<<node<<" "<<b<<" "<<e<<" "<<i<<" "<<j<<endl;
        return 100000000;
    }
    if(b>=i&&e<=j)
    {
        //cout<<node<<" "<<b<<" "<<e<<" "<<i<<" "<<j<<" "<<tree[node]<<endl;
        return tree[node];
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return min(p1,p2);

}
int main()
{
    int tc,t;
    scanf("%d",&tc);
    for(t=1; t<=tc; t++)
    {
        memset(tree,0,sizeof(tree));
        memset(arr,0,sizeof(arr));
        int n,q,i,j,l,r;
        scanf("%d %d",&n,&q);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
        }
        init(1,1,n);
        printf("Case %d:\n",t);
        for(i=0; i<q; i++)
        {
            scanf("%d %d",&l,&r);
            int ans=query(1,1,n,l,r);
            printf("%d\n",ans);
        }
    }

}
