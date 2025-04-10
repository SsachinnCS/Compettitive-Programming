#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k; // `n` is the number of elements, `m` is the target sum, `k` is unused.
    cin >> n >> m >> k;

    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if(k>n && k>m){
        cout<<0;
        return 0;
    }

    if(m==k){
        cout<<0;
        return 0;
    }

    // Sort the array in ascending order to pick the largest elements first
    sort(arr, arr + n);

    int count = 0; // Tracks the number of elements used
    int currentSum = k; // Tracks the running total

    // Start from the largest element and add elements until the sum >= m
    for (int i = n - 1; i >= 0; i--) {
        currentSum -= 1;
        currentSum += arr[i];
        count++;

        if (currentSum >= m) {
            cout << count;
            return 0;
        }
    }

    // If we cannot reach the target sum, print -1
    cout << "-1";
    return 0;
}
