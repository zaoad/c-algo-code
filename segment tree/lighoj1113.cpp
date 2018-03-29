#include<bits/stdc++.h>
using namespace std;
int tree[300007],arr[100007],n;
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
    tree[node]=tree[left]+tree[right];
}
int query(int node,int b,int e,int i,int j)
{
    if(e<i||b>j)
    {
        //cout<<node<<" "<<b<<" "<<e<<" "<<i<<" "<<j<<endl;
        return 0;
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
    return p1+p2;

}
void add(int node,int b,int e,int i,int val)
{
    //cout<<b<<" "<<e<<" "<<i<<endl;
    int mid=(b+e)/2;
    if(b==i&&e==i)
    {
        //cout<<"gece"<<endl;
        tree[node]+=val;
        return ;
    }
    int left=node*2;
    int right=node*2+1;
    if(mid>=i)
        add(left,b,mid,i,val);
    else
        add(right,mid+1,e,i,val);
    tree[node]=tree[left]+tree[right];
}
int main()
{
    //freopen("output.txt","w",stdout);
    int tc,t,c,x,y,val;
    scanf("%d",&tc);
    for(t=1; t<=tc; t++)
    {
        memset(tree,0,sizeof(tree));
        memset(arr,0,sizeof(arr));
        int q,i,j,l,r;
        scanf("%d %d",&n,&q);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
        }
        init(1,1,n);
        //print();
        printf("Case %d:\n",t);
        for(i=0; i<q; i++)
        {
            scanf("%d",&c);
            if(c==1)
            {
                scanf("%d",&x);
                //printf("%d\n",arr[x+1]);
                int value=query(1,1,n,x+1,x+1);
                printf("%d\n",value);
                add(1,1,n,x+1,-1*value);
                //arr[x+1]=0;
                //print();
            }
            else if(c==2)
            {
                scanf("%d %d",&x,&val);
                add(1,1,n,x+1,val);
                //print();
            }
            else if(c==3)
            {
                scanf("%d %d",&x,&y);
                int sum=query(1,1,n,x+1,y+1);
                printf("%d\n",sum);
                //print();
            }

        }
    }

}
/*
1
5 6
3 2 1 4 5
1 4
2 3 4
3 0 3
1 2
3 0 4
1 1
*/
