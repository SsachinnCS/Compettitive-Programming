#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef long long ll;

const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;

ll  dfs(int n,int k,int d,int sum,int take,vector< vector<ll>>& dp){
    if(sum>n)return 0;

    if(sum==n)return take?1:0;

    if(dp[sum][take]!=-1)return dp[sum][take];
    ll ways = 0;

    for(int i=1;i<=k;i++){

        if(i>=d)ways=(ways+dfs(n,k,d,sum+i,1,dp))%MOD;
        else ways=(ways+dfs(n,k,d,sum+i,take,dp))%MOD;

    }

    return dp[sum][take]=ways;


}

void solve() {
    /* Your code here */

    int n,k,d;
    cin>>n>>k>>d;
   vector< vector<ll>>dp(105,vector<ll>(2,-1));
   
   cout<<dfs(n,k,d,0,0,dp)<<endl;
}

int main() {
    optimize();
    
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}