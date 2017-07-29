#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll inf = 1e16;
ll level[1001];
vector<ll>adj[1001];
map<ll, ll>m;
ll cnt=0;

void bfs(ll source) {
    queue<ll> q;
    ll prev, i, j, cur;
    q.push(source);
    level[source]=0;

    while(!q.empty()) {
        prev=q.front();
        q.pop();

        for(i=0; i<adj[prev].size(); i++) {
            cur=adj[prev][i];
            if(level[cur]==inf) {
                level[cur]=level[prev]+1;
                q.push(cur);
            }
        }

    }

}


inline void clear_() {
    for(ll i=0; i<1001; i++) {
        adj[i].clear();
    }
    cnt=1;
    m.clear();

}


int main() {
    ll n,b,c,i,j,s,l,u,v,t=1;

    while(scanf("%lld",&n)==1 && n) {
        clear_();

        for(i=0; i<n; i++) {
            scanf("%lld %lld",&u,&v);
            if(!m[u]) m[u] = cnt++;
            if(!m[v]) m[v] = cnt++;

            adj[m[u]].push_back(m[v]);
            adj[m[v]].push_back(m[u]);
        }

        while(1) {
            scanf("%lld %lld", &u, &v);
            if(u==0 && v==0) break;

            for(i=0; i<1001; i++) level[i]=inf;
            bfs(m[u]);
            ll unvis=0,result=0;

            for(i=0; i<1001; i++) {
                if(level[i]<=v) result++;
            }

            ll r=cnt-1-result;
            printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n", t++, r, u, v);

        }

    }
    return 0;
}
