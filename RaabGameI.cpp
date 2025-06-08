#include <bits/stdc++.h>
using namespace std;

void construct_game(int n, int a, int b) {
    if (a + b > n) {
        cout << "NO\n";
        return;
    }

    vector<int> A, B;
    set<int> unused;

    for (int i = 1; i <= n; ++i) unused.insert(i);

    // Player A wins 'a' times: A plays large, B plays small
    for (int i = 0; i < a; ++i) {
        int big = *prev(unused.end()); // largest
        int small = *unused.begin();   // smallest
        A.push_back(big);
        B.push_back(small);
        unused.erase(big);
        unused.erase(small);
    }

    // Player B wins 'b' times: B plays large, A plays small
    for (int i = 0; i < b; ++i) {
        int big = *prev(unused.end());
        int small = *unused.begin();
        A.push_back(small);
        B.push_back(big);
        unused.erase(big);
        unused.erase(small);
    }

    // Ties: both play same value
    for (int v : unused) {
        A.push_back(v);
        B.push_back(v);
    }

    cout << "YES\n";
    for (int x : A) cout << x << " ";
    cout << "\n";
    for (int x : B) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, a, b;
        cin >> n >> a >> b;
        construct_game(n, a, b);
    }

    return 0;
}
