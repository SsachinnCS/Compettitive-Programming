#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define all(x) x.begin(), x.end()

typedef vector<string> vs;

string serialize(const vs &v) {
    string s;
    for (auto &x : v) s += x + "|";
    return s;
}

vector<vs> generateMoves(const vs &curr) {
    int n = curr.size();
    vector<vs> res;
    for (int l = 0; l < n; ++l) {
        for (int r = l; r < n; ++r) {
            vector<string> cut(curr.begin() + l, curr.begin() + r + 1);
            vector<string> remain;
            for (int i = 0; i < n; ++i)
                if (i < l || i > r) remain.push_back(curr[i]);

            for (int pos = 0; pos <= (int)remain.size(); ++pos) {
                vector<string> next = remain;
                next.insert(next.begin() + pos, all(cut));
                if (next != curr) res.push_back(next);
            }
        }
    }
    return res;
}

void solve() {
    int n;
    cin >> n;
    string temp;
    cin >> temp; // "shuffled"

    vs shuffled(n), original(n);
    cin.ignore();
    for (int i = 0; i < n; ++i) getline(cin, shuffled[i]);

    cin >> temp; // "original"
    cin.ignore();
    for (int i = 0; i < n; ++i) getline(cin, original[i]);

    queue<pair<vs, int>> q;
    unordered_set<string> vis;
    q.push({shuffled, 0});
    vis.insert(serialize(shuffled));
    string target = serialize(original);

    while (!q.empty()) {
        auto [curr, dist] = q.front();
        q.pop();

        if (serialize(curr) == target) {
            cout << dist << endl;
            return;
        }

        for (auto &next : generateMoves(curr)) {
            string key = serialize(next);
            if (!vis.count(key)) {
                vis.insert(key);
                q.push({next, dist + 1});
            }
        }
    }
}

int main() {
    optimize();

    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}
