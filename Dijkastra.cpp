#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const int N = 1e5 + 10;
const int INF = 1e9 + 10;

vector<pair<int,int> > g[N];
int d[N], h[N]; 

void dijkstra(int sourse){
    vector<int>vis(N,0);
    vector<int>dis(N,INF);

    set<pair<int,int>> st;
    st.insert({0,sourse});
    dis[sourse]=0;

    while(st.size()>0){
        auto node = *st.begin();
        int v = node.second;
        int dist = node.first;
        st.erase(st.begin());
        if(vis[v])continue;
        vis[v]=1;

        for(auto child : g[v]){
            int child_v = child.first;
            int wt = child.second;


            if(dis[v]+wt < dis[child_v]){
                dis[child_v]=dis[v]+wt;
                st.insert({dis[child_v],dis[v]+wt});
            }
        }


    }
}

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        g[x].push_back({y,wt});
    }
}