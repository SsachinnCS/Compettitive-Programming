#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> home(n), away(n);
    vector<int> ansh(n, 0), answ(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> home[i] >> away[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (home[i] == away[j]) {
                    ansh[i]++,ansh[j]++; // Increment home score for the 
                }
                else ansh[i]++,answ[j]++; // Nahi to Increment both ka score home and away 
            }
        }
        
    }

    for (int i = 0; i < n; i++) {
        cout << ansh[i] << " " << answ[i] << endl;
    }

    return 0;
}
