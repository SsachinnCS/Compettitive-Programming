#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long

int main() {
    optimize();

    string n, m;
    cin >> n >> m;

    set<char> n1, m1;
    for (auto it : n) n1.insert(it);
    for (auto it : m) m1.insert(it);

    unordered_map<char, int> np, mp;

    bool allFound = true;
    for (auto ch : m1) {
        if (!n1.count(ch)) {
            allFound = false;
            break;
        }
    }

    int ans = 0;
    if (allFound) {
        for (auto it : n) np[it]++;
        for (auto it : m) mp[it]++;

        for (auto it : mp) {
            ans += min(it.second, np[it.first]);
        }

        cout << ans << endl;
    } else {
        cout << -1;
    }

    return 0;
}
