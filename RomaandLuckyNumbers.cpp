#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int n, k, count = 0; 
    cin >> n >> k;

    while (n--) {
        int digit, luckyCount = 0;
        cin >> digit;

        // Count lucky digits in the current number
        while (digit != 0) {
            int num = digit % 10;
            if (num == 4 || num == 7) 
                luckyCount++;
            digit /= 10;
        }

        // Check if lucky digit count is within the limit
        if (luckyCount <= k) 
            count++;
    }

    cout << count << endl;
    return 0;
}
