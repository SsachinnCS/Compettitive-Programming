#include <bits/stdc++.h>
using namespace std;

int main() {
    string o, t;
    cin >> o >> t;

    int n = o.size(), m = t.size();

    // Convert both strings to lowercase for comparison
    string f = o, s = t;
    transform(f.begin(), f.end(), f.begin(), ::tolower);
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    // Compare the strings lexicographically
    if (f < s) {
        cout << "-1" << endl; // 1st < 2nd
    } else if (f > s) {
        cout << "1" << endl; // 2nd < 1st
    } else {
        cout << "0" << endl; // 1st == 2nd
    }

    

    return 0;
}
