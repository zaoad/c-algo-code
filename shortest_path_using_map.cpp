

#include<bits/stdc++.h>
using namespace std;

int level[32],vis[35];
queue<int>q;
vector<int>adj[32];
int node[35];
map<int, int>m;
int cnt=1;
map<int,int>::iterator it;

void bfs(int source) {
    int prev,i,j,cur;
    vis[source]=1;
    q.push(source);
    level[source]=0;

    while(!q.empty()) {
        prev=q.front();
        q.pop();
        for(i=0; i<adj[prev].size(); i++) {
            cur=adj[prev][i];
            if(!vis[cur]) {
                vis[cur]=1;
                q.push(cur);
                level[cur]=level[prev]+1;
            }
        }
    }

}
void clear_() {
    memset(vis,0,sizeof(vis));
    memset(level,0,sizeof(level));
    memset(node,0,sizeof(node));
    for(int i=0; i<32; i++) {
        adj[i].clear();
    }
    cnt=1;
    m.clear();

}
int main() {
    int n,b,c,i,j,s,l,u,v,t=1;
    while(scanf("%d",&n)&&n) {
        clear_();

        for(i=0; i<n; i++) {
            scanf("%d %d",&u,&v);
            if(!m[u]) m[u] = cnt++;
            if(!m[v]) m[v] = cnt++;

            adj[m[u]].push_back(m[v]);
            adj[m[v]].push_back(m[u]);
        }

        while(scanf("%d %d", &u, &v) ) {
            if(u==0&&v==0)
                break;
            memset(vis,0,sizeof(vis));
            memset(level,0,sizeof(level));
            bfs(m[u]);
            int unvis=0,result=0;

            for(i=1; i<cnt; i++) {
                if(level[i]>v) result++;
                if(vis[i]==0) unvis++;
            }

            result+=unvis;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", t++, result, u, v);

        }

    }
    return 0;
}
