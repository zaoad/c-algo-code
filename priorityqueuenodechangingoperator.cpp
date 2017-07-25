#include<bits/stdc++.h>
using namespace std;
struct node{
    int id;
    int cost;
    node(int a,int b)
    {
      id=a;
      cost=b;
    }
};
priority_queue<node>q;
bool operator(node A,node B){
    return A.cost<B.cost;
}
void print(node a)
{
    cout<<a.id<<" "<<a.cost<<endl;
}
int main()
{
    q.push(node(1,9));
    q.push(node(2,6));
    q.push(node(3,8));
    q.push(node(4,1));
    q.push(node(5,35));
    q.push(node(6,23));
    print(q.top());
    q.pop();
    print(q.top());
    q.pop();
    print(q.top());

}
