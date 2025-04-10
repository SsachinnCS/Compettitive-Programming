#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, ans = 0;
    cin >> n >> m;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a <= 0) arr.push_back(-a);  
    }

    sort(arr.begin(), arr.end()); 
    int count = m;
    
    for (int i = arr.size() - 1; i >= 0 && count > 0; i--) {
        ans += arr[i];
        count--;
    }

    cout << ans << endl;
    return 0;
}
