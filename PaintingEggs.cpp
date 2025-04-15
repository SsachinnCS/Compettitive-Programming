#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    long long A = 0, G = 0;  // Totals for painter A and G
    string result;

    for (int i = 0; i < n; i++) {
        int ai, gi;
        cin >> ai >> gi;

        if (abs((A + ai) - G) <= 500) {
            result += 'A';
            A += ai;
        } else {
            result += 'G';
            G += gi;
        }
    }

    if (abs(A - G) > 500) cout << -1 << '\n';
    else cout << result << '\n';

    return 0;
}
