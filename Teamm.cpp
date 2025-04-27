#include <bits/stdc++.h>
using namespace std;

#define optimize() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main() {
    optimize();
    
    int n, m;
    cin >> n >> m;
    
    // Impossible cases
    if (n > m + 1 || m > 2 * (n + 1)) {
        cout << -1 << endl;
        return 0;
    }

    if (n > m) { // Important fix: start with 0 if more zeros
        cout << 0;
        n--;
    }

    while (n > 0 || m > 0) {
        if (m > n) { // more 1's
            cout << 1;
            m--;
        }
        if(m>=1){
        cout << 1; // always at least one 1 (or maybe only one 1 left)
        m--;
        }
        if (n > 0) {
            cout << 0;
            n--;
        }
    }
    
    cout << endl;
    return 0;
}
