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
 
int dp[505][505];
int solve(int a,int b) {
    if (a > b) swap(a, b); // symmetry optimization
    if(a==b)return 0;
    if(dp[a][b]!=-1)return dp[a][b];
    //horizontal cuts
 
    int ans = INF;
    for(int i=1;i<a;++i){
        ans = min(ans,1+solve(i,b)+solve(a-i,b));
    }

    //vertical cuts
    for(int j=1;j<b;++j){
        ans = min(ans,1+solve(a,j)+solve(a,b-j));
    }
    return dp[a][b]=ans;
 
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
        int a,b;
        cin>>a>>b;
        memset(dp,-1,sizeof(dp));
        //vector<vector<int>>dp(a+1,vector<int>(b+1,-1));
        cout<<solve(a,b);
    }
    
    return 0;
}
