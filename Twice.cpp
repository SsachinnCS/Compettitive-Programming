#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a;
        cin >> a;

        int count = 0;
        vector<int> arr(a); 
        for (int i = 0; i < a; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end()); 

        for (int i = 0; i < a - 1; i++) { 
            if (arr[i] == arr[i + 1]) {
                count++;
                i++; 
            }
        }

        cout << count << "\n";
    }

    return 0;
}
