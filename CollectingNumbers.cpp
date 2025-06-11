#include <bits/stdc++.h>
using namespace std;
 
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
 

 
int main() {
    optimize();
    ll n,m;
    cin >> n>>m;
    vector<ll> a(n), pos(n + 1);
 
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        pos[a[i]] = i;
    }

    // vector<pair<int,int>>pswap(m+1);
    // for(int i=0;i<m;i++){
    //     cin>>pswap[i].first>>pswap[i].second;
    // }

    while(m--){
        ll rounds = 1;
        ll c,d;
        cin>>c>>d;
        swap(a[c-1],a[d-1]);
        swap(pos[a[c-1]],pos[a[d-1]]);
    
    
    for (ll i = 1; i < n; ++i) {
        if (pos[i] > pos[i + 1]) {
            rounds++;
        }
    }
 
    cout << rounds << endl;
}
    return 0;


}