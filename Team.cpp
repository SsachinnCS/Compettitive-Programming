#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int n, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < 3; j++) {
            int a;
            cin >> a;
            if (a == 1) count++;
        }
        if (count >= 2) ans++;
    }

    cout << ans;
    return 0;
}
