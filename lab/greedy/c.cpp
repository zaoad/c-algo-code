#include<bits/stdc++.h>
using namespace std;
int mid1=-1,mid2=-1,n;
int arr1[1000],arr2[1000];
int check(int num,int ind,int n)
{
    if(n==1)
    {
        if(arr1[ind]<num&&num<arr1[ind+1])
            return 1;
        if(arr1[ind]>num)
            return 2;
        if(arr1[ind+1]<num)
            return 3;
    }
    if(n==2)
    {
        if(arr2[ind]<num&&num<arr2[ind+1])
            return 1;
        if(arr2[ind]>num)
            return 2;
        if(arr2[ind+1]<num)
            return 3;
    }

}
void binary1(int high,int low)
{
    int mid;
    cout<<high<<" "<<low<<endl;
    if(low>=high)
    return ;
    mid=(high+low)/2;
    cout<<"mid "<<mid<<" "<<arr1[mid]<<" "<<n-mid<<endl;
    if(check(arr1[mid],n-mid,2)==1)
    {
        mid1=arr1[mid];
    }
    else if(check(arr1[mid],n-mid,2)==2)
    {
        low=mid;
        binary1(high,low);
    }
    else if(check(arr1[mid],n-mid,2)==3)
    {
        high=mid;
        binary1(high,low);
    }
}
int main()
{
    int i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr1[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>arr2[i];
    }
    binary1(n,1);
    cout<<mid1<<endl;

}
