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
    int n,x;
    cin>>n>>x;

    vector<int>price(n),pages(n);
    for(int i=0;i<n;i++)cin>>price[i];
    for(int i=0;i<n;i++)cin>>pages[i];

    vector<int>dp(x+1,0);

    for(int i=0;i<n;i++){
        for(int j=x;j>=price[i];j--){
            dp[j]=max(dp[j],dp[j-price[i]]+pages[i]);
        }
    }
    cout<< dp[x] <<endl;
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