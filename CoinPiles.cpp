#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;

int main(){
    optimize();

     int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        if ((a + b) % 3 == 0 && min(a, b) * 2 >= max(a, b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}