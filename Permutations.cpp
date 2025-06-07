#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const int N = 1e5 + 10;
const int INF = 1e9 + 10;


int main() {
    optimize();

    ll n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
    }
    else if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        for (ll i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        for (ll i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}