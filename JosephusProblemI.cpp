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
    set<int>people;

    for(int i=1;i<=n;i++){
        people.insert(i);
    }

    auto it = people.begin();
    while(!people.empty()){
        ++it;
        
        if(it==people.end())it=people.begin();
        cout<<*it<<" ";

        auto to_erase = it++;
        if(it==people.end())it=people.begin();
        people.erase(to_erase);
    }
    cout<<endl;

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