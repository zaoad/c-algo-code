#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k;
    int cnt=0;
    printf("%d",'0');
    cout<<"asdf"<<endl;
    for(i=1; i<=1000; i++)
    {
        cout<<"i "<<i<<endl;
        if(i%4==0)
        {
            int temp=i;
            int sum=0;
            while(temp)
            {
                int a=temp%10;
                sum+=a;
                temp/=10;
            }
            printf("sum %d\n",sum);
            if(sum%4==0)
                cnt++;
        }
    }
    cout<<cnt<<endl;

}
