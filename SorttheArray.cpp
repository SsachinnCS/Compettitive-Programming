#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    if (arr == sortedArr) {
      
        cout << "yes\n1 1\n";
        return 0;
    }

    int l = 0, r = n - 1;
    while (arr[l] == sortedArr[l]) l++; 
    while (arr[r] == sortedArr[r]) r--; 

    
    reverse(arr.begin() + l, arr.begin() + r + 1);

    if (arr == sortedArr) {
        cout << "yes\n" << l + 1 << " " << r + 1 << "\n"; 
    } else {
        cout << "no\n";
    }

    return 0;
}
