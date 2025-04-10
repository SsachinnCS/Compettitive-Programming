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

        vector<int> arr(a); 
        for (int i = 0; i < a; i++) {
            cin >> arr[i];
        }

        int b = a - 2; 
        bool found = false;

        
        for (int i = a-1; i >=0; i--) {
            for (int j = i + 1; j < a; j++) { 
                if (arr[i] * arr[j] == b) {
                    cout << arr[i] << " " << arr[j] << "\n";
                    found = true;
                    break; 
                }
            }
            if (found) break; 
        }

        // if (!found) {
        //     cout << "No valid pair found\n";
        // }
    }

    return 0;
}
