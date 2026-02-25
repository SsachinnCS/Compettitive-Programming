#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int calculate_cost(const string& s, int start_index) {
    const string docker = "docker";
    int cost = 0;
    for (int i = 0; i < 6; ++i) {
        if (s[start_index + i] != docker[i]) cost++;
    }
    return cost;
}

void solve() {
    string s;
    cin >> s;
    int n;
    cin >> n;

    int len_s = (int)s.size();
    int max_k = len_s / 6;

    vector<int> count(max_k + 2, 0);
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        if (l <= max_k) {
            count[l]++;
            if (r + 1 <= max_k) count[r + 1]--;
        }
    }

    int max_satisfied = 0;
    for (int k = 1; k <= max_k; ++k) {
        count[k] += count[k - 1];
        max_satisfied = max(max_satisfied, count[k]);
    }

    if (max_satisfied == 0) {
        cout << 0 << endl;
        return;
    }

    vector<int> costs;
    for (int i = 0; i <= len_s - 6; ++i) {
        costs.push_back(calculate_cost(s, i));
    }

    deque<vector<long long>> dp_history;
    for (int i = 0; i < 6; ++i) {
        dp_history.push_back({0});
    }

    for (int i = 6; i <= len_s; ++i) {
        vector<long long> new_dp = dp_history.back();
        if (i % 6 == 0) new_dp.push_back(INF);

        const auto& oldest_dp = dp_history.front();
        int cost = costs[i - 6];

        for (int k = 1; k < (int)new_dp.size(); ++k) {
            if (k - 1 < (int)oldest_dp.size() && oldest_dp[k - 1] != INF) {
                new_dp[k] = min(new_dp[k], oldest_dp[k - 1] + cost);
            }
        }

        dp_history.pop_front();
        dp_history.push_back(new_dp);
    }

    const vector<long long>& final_costs = dp_history.back();
    long long min_total_cost = INF;

    for (int k = 1; k <= max_k; ++k) {
        if (count[k] == max_satisfied && k < (int)final_costs.size()) {
            min_total_cost = min(min_total_cost, final_costs[k]);
        }
    }

    cout << min_total_cost << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
