#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> arr(n);
        int count = 0;

        // Read input and compute sum
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            count += arr[i];
        }

        // Expand array into brr
        vector<int> brr;
        brr.reserve(n * k); // Optimized memory allocation
        for (int i = 0; i < k; i++) {
            brr.insert(brr.end(), arr.begin(), arr.end());
        }

        // Multiply count by k
        count *= k;
        if(count<x){
            cout<< 0 <<endl;
        continue;
    }

        // Process the array
        int ans = 0;

        for (int num : brr) {
            if (count >= x) {
                count -= num;
                ans++;
            } else {
                break;
            }
        }

        cout << ans << endl;
    }
    
}
