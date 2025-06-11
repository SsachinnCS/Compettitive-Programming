#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    unordered_map<int, int> last;
    vector<long long> dp(n + 1, 0); // dp[i]: number of good subsequences ending at i-1
    dp[0] = 1; // Base case: empty subsequence

    int left = 0;
    for (int right = 0; right < n; ++right) {
        if (last.count(arr[right])) {
            left = max(left, last[arr[right]] + 1);
        }
        last[arr[right]] = right;
        dp[right + 1] = (dp[right] * 2 - (left > 0 ? dp[left - 1] : 0) % MOD);
        if (dp[right + 1] < 0) dp[right + 1] += MOD;
    }

    // Subtract 1 to exclude the empty subsequence
    cout << (dp[n] - 1 + MOD) % MOD << endl;
    return 0;
}