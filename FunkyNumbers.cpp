#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int size = log10(n) + 1;
    string digits = to_string(n);

    // Sort the string's characters (digits) in descending order
    sort(digits.rbegin(), digits.rend()); // Reverse iterator for descending order

    // Convert the sorted string back to an integer
    int sortedDescending = stoi(digits);

    while (sortedDescending > 0) {
        int a = sortedDescending % 10; // Get the last digit
        // int ans = (((a) * (a + 1)) / 2) + ((((a * 10) + (a + 1)) * ((a * 10) + a)) / 2);
         int ans = (((a) * (size) / 2)) + ((((a * 10) + (size)) * ((a * 10) + a)) / 2);

        if (ans == n) {
            cout << "YES";
            return 0;
        }

        sortedDescending /= 10; // Remove the last digit
    }

    cout << "NO";
    return 0;
}
