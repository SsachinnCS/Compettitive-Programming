#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    vector<vector<int>> R_value(N, vector<int>(N, 0));
    for (int l = 0; l < N; l++) {
        vector<bool> present(N + 2, false);
        int consecutive_pair_count = 0;
        for (int r = l; r < N; r++) {
            int x = P[r];
            present[x] = true;
            if (x - 1 >= 1 && present[x - 1]) {
                consecutive_pair_count++;
            }
            if (present[x + 1]) {
                consecutive_pair_count++;
            }
            int distinct_count = r - l + 1;
            R_value[l][r] = distinct_count - consecutive_pair_count;
        }
    }

    vector<vector<int>> dp(N + 1, vector<int>(K + 1, INT_MIN));
    dp[0][0] = 0;

    for (int i = 0; i <= N; i++) {
        for (int k = 0; k <= K; k++) {
            if (dp[i][k] == INT_MIN) continue;
            if (i < N) {
                dp[i + 1][k] = max(dp[i + 1][k], dp[i][k]);
            }
            if (k < K && i < N) {
                for (int j = i; j < N; j++) {
                    int value = R_value[i][j];
                    if (dp[j + 1][k + 1] < dp[i][k] + value) {
                        dp[j + 1][k + 1] = dp[i][k] + value;
                    }
                }
            }
        }
    }

    cout << dp[N][K] << endl;
    return 0;
}
