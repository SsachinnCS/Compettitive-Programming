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

int solve(string& n,string& m,int i,int j,vector<vector<int>>& dp) {
    if(i==0)return j;
    if(j==0)return i;
    if(dp[i][j]!=-1)return dp[i][j];
    if(n[i-1]==m[j-1])return dp[i][j]=solve(n,m,i-1,j-1,dp);

return dp[i][j] = 1 + min({solve(n,m,i,j-1,dp), solve(n,m,i-1,j,dp), solve(n,m,i-1,j-1,dp)});



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
        string n,m;
        cin>>n>>m;
        int n1=n.size();
        int m1= m.size();
        vector<vector<int>>dp(n1+1,vector<int>(m1+1,-1));
        cout<<solve(n,m,n1,m1,dp)<<endl;
    }
    
    return 0;
}