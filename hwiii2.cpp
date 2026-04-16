// #include <bits/stdc++.h>
// using namespace std;

// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// typedef long long ll;

// void solve() {
//     int n;
//     if (!(cin >> n)) return;
//     vector<ll> l(n);
//     for (int i = 0; i < n; i++) cin >> l[i];

//     ll min_even = LLONG_MAX;

//     // To get an even difference, we need (even - even) or (odd - odd)
//     // To minimize |L[j] - L[i]| where j < i, we look for the smallest
//     // difference between any two numbers of the same parity.
    
//     // We can track the minimum and maximum seen so far to find small differences,
//     // but the most reliable way to find the smallest difference in a set
//     // is to sort the numbers of the same parity.
    
//     vector<ll> evens, odds;
//     for(int i = 0; i < n; i++) {
//         if(l[i] % 2 == 0) evens.push_back(l[i]);
//         else odds.push_back(l[i]);
//     }

//     // Checking differences between adjacent numbers in sorted parity groups
//     // Note: The problem says j < i, but for |L[j] - L[i]|, if the values exist,
//     // some j < i will eventually provide the smallest difference.
    
//     auto get_min_diff = [&](vector<ll>& vec) {
//         if (vec.size() < 2) return LLONG_MAX;
//         sort(vec.begin(), vec.end());
//         ll d = LLONG_MAX;
//         for (int i = 0; i < (int)vec.size() - 1; i++) {
//             if (vec[i] != vec[i+1]) {
//                 d = min(d, vec[i+1] - vec[i]);
//             }
//         }
//         return d;
//     };

//     min_even = min(get_min_diff(evens), get_min_diff(odds));

//     cout << min_even << endl;
// }

// int main() {
//     optimize();
//     solve();
//     return 0;
// }



#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> L(N);

    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }

    long long ans = LLONG_MAX;

    for (int j = 0; j < N; j++) {
        for (int i = j + 1; i < N; i++) {
            if (L[j] != L[i]) {
                long long cost = llabs(L[j] - L[i]);

                if (cost % 2 == 0) {
                    ans = min(ans, cost);
                }
            }
        }
    }

    if (ans == LLONG_MAX)
        cout << 0 << endl;
    else
        cout << ans << endl;

    return 0;
}