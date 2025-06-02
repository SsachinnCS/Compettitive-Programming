#include<bits/stdc++.h>
using namespace std;


#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long

const int MOD = 1e9 + 7;
const int N = 1e5 + 10;

vector<int>g[N];
bool vis[N];

void dfs(int vertex){
    
    // Take action on vertex after entering on vertex
    if(vis[vertex])return;
    vis[vertex]=true;
    for(int child: g[vertex]){
        //cout<<"parent->"<<vertex<<"child"<<child<<endl;
        //Take action on child before entering the child node
        dfs(child);
        //Take action on child after exiting in child node
    }
    
    //Take action on vertex before exiting on vertex
}


int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);

        
    }
     int cnt = 0;
     for(int i=1; i<=n ;i++){
        if(vis[i])continue;
        dfs(i);
        cnt++;
     }
     cout<<cnt;
}





// 6 9    
// 1 3
// 1 5
// 3 5
// 3 4
// 3 6
// 3 2 
// 2 6
// 4 6
// 5 6