#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, count = 0;
    cin >> n >> m;

    char arr[n][m];

    // Input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // Checking each 'W' (Wolf) position
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 'W') {
                // Right
                if (j + 1 < m && arr[i][j + 1] == 'P') {
                    arr[i][j + 1] = '.';
                    count++;
                }
                // Left
                else if (j - 1 >= 0 && arr[i][j - 1] == 'P') {
                    arr[i][j - 1] = '.';
                    count++;
                }
                // Down
                else if (i + 1 < n && arr[i + 1][j] == 'P') {
                    arr[i + 1][j] = '.';
                    count++;
                }
                // Up
                else if (i - 1 >= 0 && arr[i - 1][j] == 'P') {
                    arr[i - 1][j] = '.';
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}
