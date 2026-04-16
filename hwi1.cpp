// #include <bits/stdc++.h>
// using namespace std;

// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// typedef long long ll;

// void solve() {
//     int n;
//     ll m;
//     cin >> n >> m;
//     vector<ll> v(n), d(n);
//     for (int i = 0; i < n; i++) cin >> v[i];
//     for (int i = 0; i < n; i++) cin >> d[i];

//     ll low = 0, high = 2e9, X = 2e9;
//     while (low <= high) {
//         ll mid = low + (high - low) / 2;
//         ll count = 0;
//         for (int i = 0; i < n; i++) {
//             if (v[i] >= mid) {
//                 count += (v[i] - mid) / d[i] + 1;
//             }
//         }
//         if (count >= m) {
//             X = mid;
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }

//     ll total_taste = 0;
//     ll meals_taken = 0;

//     for (int i = 0; i < n; i++) {
//         if (v[i] > X) {
//             ll ti = (v[i] - (X + 1)) / d[i] + 1;
//             ll last_term = v[i] - (ti - 1) * d[i];
//             total_taste += (ti * (v[i] + last_term)) / 2;
//             meals_taken += ti;
//         }
//     }

//     if (meals_taken < m) {
//         total_taste += (m - meals_taken) * X;
//     }

//     cout << total_taste << endl;
// }

// int main() {
//     optimize();
//     solve();
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    vector<long long> v(n), d(n);

    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n;i++) cin >> d[i];

    priority_queue<pair<long long,int>> pq;

    for(int i=0;i<n;i++){
        pq.push({v[i], i});
    }

    long long ans = 0;

    while(m-- && !pq.empty()){
        auto top = pq.top();
        pq.pop();

        long long taste = top.first;
        int idx = top.second;

        if(taste <= 0) break;

        ans += taste;

        long long nextTaste = taste - d[idx];
        pq.push({nextTaste, idx});
    }

    cout << ans << endl;
}