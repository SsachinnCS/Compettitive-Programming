#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;

#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 8;
char board[SIZE][SIZE];
bool col[SIZE], diag1[2 * SIZE - 1], diag2[2 * SIZE - 1];
int totalWays = 0;

void solve(int row) {
    if (row == SIZE) {
        totalWays++;
        return;
    }

    for (int c = 0; c < SIZE; c++) {
        if (board[row][c] == '*') continue; // blocked
        if (col[c] || diag1[row + c] || diag2[row - c + SIZE - 1]) continue; // attacked

        // mark
        col[c] = diag1[row + c] = diag2[row - c + SIZE - 1] = true;

        solve(row + 1);

        // unmark
        col[c] = diag1[row + c] = diag2[row - c + SIZE - 1] = false;
    }
}

int main() {
    optimize();
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> board[i][j];
        }
    }

    solve(0);

    cout << totalWays << "\n";
    return 0;
}
