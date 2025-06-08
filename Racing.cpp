#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    vector<ll> d(n); // Correct sizing
    vector<pair<int, int>> lr(n);

    // Read d[i]
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    // Read l[i], r[i]
    for (int i = 0; i < n; i++) {
        cin >> lr[i].first >> lr[i].second;
    }

    int cnt = 0; // total number of 1s assigned

    for (int i = 0; i < n; i++) {
        if (d[i] != -1) {
            // if already filled and within range
            if (d[i] < lr[i].first || d[i] > lr[i].second) {
                cout << -1 << endl;
                return;
            }
            if (d[i] == 1) cnt++;
        } else {
            // try assigning 0
            if (0 >= lr[i].first && 0 <= lr[i].second) {
                d[i] = 0;
            }
            else if (cnt + 1 >= lr[i].first && cnt + 1 <= lr[i].second) {
                d[i] = 1;
                cnt++;
            } else {
                cout << -1 << endl;
                return;
            }
        }
    }

    // Output final array
    for (int i = 0; i < n; i++) {
        cout << d[i] << " ";
    }
    cout << endl;
}

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
