#include<bits/stdc++.h>
using namespace std;
struct node{
    int id;
    int cost;
    node(int _id,int _cost)
    {
        id=_id;
        cost=_cost;
    }

};
vector<node>v;
bool compareByLength(node a, node b)
{
    return a.cost > b.cost;
}
int main()
{

    v.push_back(node(1,9));
    v.push_back(node(2,6));
    v.push_back(node(3,8));
    v.push_back(node(4,1));
    v.push_back(node(5,35));
    v.push_back(node(6,23));
    sort(v.begin(), v.end(), compareByLength);
    for(int i=0;i<v.size();i++){
        printf("id %d cost %d\n",v[i].id,v[i].cost);
    }
}
