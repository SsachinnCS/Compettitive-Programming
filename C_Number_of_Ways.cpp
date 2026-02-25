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
    ll tsum = 0;
    vector<int>arr(n+1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        tsum+=arr[i];
    }

    if(n<3 || (tsum%3) != 0){
        cout<<0;
        return ;
    }
    
    ll psum = tsum/3;
    ll csum =0;
    ll ans=0;
    ll cnt=0;

    for(int i=0;i<n-1;i++){
        csum+=arr[i];

        if(csum == 2*psum)ans+=cnt;

        if(csum== psum)cnt++;
    }

    cout<<ans;
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