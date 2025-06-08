#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;




int main() {
    optimize();
    int n, x;
    cin >> n >> x;

    vector<int> weights(n);
    for (int &w : weights) cin >> w;

    sort(weights.begin(), weights.end());

    int i = 0, j = n - 1;
    int rides = 0;

    while (i <= j) {
        if (weights[i] + weights[j] <= x) {
            i++;  
        }
        j--;    
        rides++;
    }

    cout << rides << "\n";
    return 0;
}
