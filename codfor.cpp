#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long

int main() {
    optimize();
  
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        multiset<int> digits;
        for (char c : s) {
            digits.insert(c - '0');
        }

        string ans = "";
        for (int i = 1; i <= 10; i++) {
            int need = 10 - i;
            auto it = digits.lower_bound(need);
            ans += (char)(*it + '0');
            digits.erase(it);
        }
        cout << ans << "\n";
    }
    return 0;
}