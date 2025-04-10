#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long k, l;
    cin >> k >> l;

    long long current = k;
    int power = 1;

    while (current < l) {
        current *= k;
        power++;
    }

    if (current == l) {
        cout << "YES\n" << power - 1 << "\n"; 
    } else {
        cout << "NO\n";
    }

    return 0;
}
