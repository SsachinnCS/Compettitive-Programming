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
    int brahma;
    cin >> brahma;

    vi vishnu(brahma + 1, 0);
    for (int agni = 0; agni < brahma; ++agni) {
        int ganesha;
        cin >> ganesha;
        if (ganesha <= brahma) {
            vishnu[ganesha]++;
        }
    }

    vector<ll> shiva(brahma + 2, 0);

    int k_min_0 = vishnu[0];
    int k_max_0 = brahma;
    if (k_min_0 <= k_max_0) {
        shiva[k_min_0]++;
        shiva[k_max_0 + 1]--;
    }

    bool garuda = true;
    for (int indra = 1; indra <= brahma; ++indra) {
        if (vishnu[indra - 1] == 0) {
            garuda = false;
        }
        if (!garuda) break;
        int k_min = vishnu[indra];
        int k_max = brahma - indra;
        if (k_min <= k_max) {
            shiva[k_min]++;
            shiva[k_max + 1]--;
        }
    }

    ll hanuman = 0;
    for (int varuna = 0; varuna <= brahma; ++varuna) {
        hanuman += shiva[varuna];
        cout << hanuman << (varuna == brahma ? "" : " ");
    }
    cout << endl;
}

int main() {
    optimize();
    
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int rudra;
    cin >> rudra;
    while (rudra--) {
        solve();
    }
    
    return 0;
}
