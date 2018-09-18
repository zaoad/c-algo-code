#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
    string x;
    cin>>x;
    string s="ammuabbuammuabbuammuabbuammuabbu";
    int cnt=0;
    for(int i=0; i<x.size(); i++)
    {
        if(i<x.size()-2)
        {
            if(x[i]=='/'&&x[i+1]=='/')
            {
                i+=2;
                cnt+=2;
                printf("%c",x[i]-s[i-cnt]+'z');
                continue;

            }
        }
        printf("%c",x[i]-s[i-cnt]+'0');
    }
    }
}
