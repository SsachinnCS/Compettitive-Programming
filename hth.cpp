#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> result(n);
        int base = 1;

        for (int i = 0; i < n; ++i) {
            result[i] = base;
            base += i + 2; // Increment sufficiently to avoid collisions
        }

        for (int x : result) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
