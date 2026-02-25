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
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int counts[26] = {0}; 
        for (char c : s) {
            counts[c - 'A']++;
        }

        string result;

        result.append(counts['T' - 'A'], 'T');

        result.append(counts['F' - 'A'], 'F');

        result.append(counts['N' - 'A'], 'N');

        for (char c = 'A'; c <= 'Z'; c++) {
            if (c != 'F' && c != 'N' && c != 'T') {
                result.append(counts[c - 'A'], c);
            }
        }

        cout << result << endl;
    }
}

int main() {
    optimize();
    
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    solve();
    
    return 0;
}