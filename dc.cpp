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
    cin >> n;
    set<int> free;
    for (int i = 1; i <= 2 * n; i++) {
        free.insert(i);
    }
    vi ans(2 * n + 1, 0);
    for (int x = n; x >= 1; x--) {
        if (x == 1) {
            int a = *free.begin();
            free.erase(a);
            int b = *free.begin();
            free.erase(b);
            ans[a] = 1;
            ans[b] = 1;
            break;
        }
        int limit = 2 * n - x;
        auto it = free.begin();
        while (it != free.end() && *it <= limit) {
            int i = *it;
            if (free.find(i + x) != free.end()) {
                ans[i] = x;
                ans[i + x] = x;
                free.erase(i);
                free.erase(i + x);
                break;
            }
            it++;
        }
    }
    for (int i = 1; i <= 2 * n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    optimize();
    
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}