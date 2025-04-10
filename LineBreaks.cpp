#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int sum = 0, count = 0;

        for (int i = 0; i < n; i++) {
            if (sum + arr[i].size() <= m) {  // Check if adding the current string fits the limit.
                sum += arr[i].size();
                count++;
            } else {
                break;  // Stop if adding another string exceeds the limit.
            }
        }

        cout << count << "\n";
    }

    return 0;
}
