#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, q, l, r;
    cin >> p >> q >> l >> r;

    vector<pair<int, int>> z_intervals(p), x_intervals(q);
    
    for (int i = 0; i < p; i++) {
        cin >> z_intervals[i].first >> z_intervals[i].second;
    }

    for (int i = 0; i < q; i++) {
        cin >> x_intervals[i].first >> x_intervals[i].second;
    }

    int count = 0;

    for (int t = l; t <= r; t++) {
        bool found = false;

        for (auto [ci, di] : x_intervals) {
            for (auto [ai, bi] : z_intervals) {
                if (max(ai, ci + t) <= min(bi, di + t)) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        if (found) count++;
    }

    cout << count;
    return 0;
}
