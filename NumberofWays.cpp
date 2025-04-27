#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long

int main() {
    optimize();
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<ll> dp(n+5, 0); 

    ll sum = 0, pre = 0, suf = 0, ans = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }

    // fill dp array from right
    for (int i = n - 1; i >= 0; i--) {
        suf += a[i];
        if (i < n - 1) dp[i] = dp[i + 1];
        if (suf == sum / 3) dp[i]++;
    }

    // find answer
    for (int i = 0; i < n - 2; i++) { // important: n-2
        pre += a[i];
        if (pre == sum / 3) ans += dp[i + 2];
    }

    cout << ans << endl;
    return 0;
}
