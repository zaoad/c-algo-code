#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="ammuabbuammuabbuammuabbuammuabbu";
    string l="111146";
    for(int i=0;i<l.size();i++)
    {
        if(l[i]>='0'&&l[i]<='9')
        printf("%c",s[i]+l[i]-'0');
        else
        {
            printf("//%c",s[i]+l[i]-'z');
        }
    }
}
