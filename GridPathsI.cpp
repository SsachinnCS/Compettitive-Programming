#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin>>n;

    vector<string>grid(n);
    for(int i=0;i<n;++i)cin>>grid[i];

    vector<vector<int>>dp(n,vector<int>(n,0));
    if(grid[0][0]=='.')dp[0][0]=1;

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(grid[i][j]=='*')continue;
            if(i>0)dp[i][j]=(dp[i][j]+dp[i-1][j])%MOD;
            if(j>0)dp[i][j]=(dp[i][j]+dp[i][j-1])%MOD;
        }
    }
    cout<<dp[n-1][n-1]<<endl;
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