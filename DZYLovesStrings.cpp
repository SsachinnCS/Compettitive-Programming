#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k, a, ans = 0;
    vector<int> arr(26);

    cin >> s >> k;
    for (int i = 0; i < 26; i++) {
        cin >> a;
        arr[i] = a;
    }

    for (int i = 0; i < s.size(); i++) {
        int target = s[i] - 'a';
        ans += arr[target] * (i + 1);
    }

    int maxWeight = *max_element(arr.begin(), arr.end());
    for (int i = s.size(); i < s.size() + k; i++) {
        ans += maxWeight * (i + 1);
    }

    cout << ans << endl;
    return 0;
}
