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
typedef vector<ll> vi;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
vi arr(N+1,0);
vi dp(N+1,-1);

ll recc(int i){
    if(i<=0)return 0;
    if(dp[i]!=-1)return dp[i];

    return dp[i]=max(recc(i-1),recc(i-2)+i*arr[i]);
}

void solve() {
    int n;
    cin>>n;

    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[a]++;
    }
    

    cout<<recc(N);

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