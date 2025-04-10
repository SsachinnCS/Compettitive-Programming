#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<string> chess(n);

    for (int i = 0; i < n; i++) {
        cin >> chess[i];
    }

    for (int i = 0; i < n; i++) {
        string row = "";
        for (int j = 0; j < m; j++) {
            if (chess[i][j] == '.') {
                
                if ((i + j) % 2 == 0) 
                    row += 'B'; 
                else 
                    row += 'W'; 
            } else {
                
                row += chess[i][j];
            }
        }
        cout << row << "\n";
    }

    return 0;
}
