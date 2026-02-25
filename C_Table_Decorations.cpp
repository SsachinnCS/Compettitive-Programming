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
    /* Your code here */
    int r,g,b;
    cin>>r>>g>>b;
    ll ans=0;
    ll sum = r+g+b;
    if(r==0){
        cout<<sum/3;
        return;
    }
    else if(g==0){
        cout<<sum/3;
        return;
    }
    else if(b==0){
        cout<<sum/3;
        return;
    }
    int limit;
    if(sum%3==0)limit=2;
    else limit = 1;
    for(int i=0;i<limit;i++){

    int fsm =min({r,g,b});
    ans+=fsm;

    r-=fsm;
    g-=fsm;
    b-=fsm;

    if(r==0)r=INF;
    else if(g==0)g=INF;
    else b=INF;
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