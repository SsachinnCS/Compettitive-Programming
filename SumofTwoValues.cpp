#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

   
    map<int, int> mp;  // value -> index

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        int need = x - a;

        if (mp.count(need)) {
            cout << mp[need] + 1 << " " << i + 1 << "\n";  // 1-based indexing
            return 0;
        }

        mp[a] = i;
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
