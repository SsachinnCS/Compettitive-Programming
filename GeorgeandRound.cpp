#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> required(n);
    vector<int> prepared(m);

    for (int i = 0; i < n; ++i)
        cin >> required[i];
    for (int i = 0; i < m; ++i)
        cin >> prepared[i];

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (prepared[j] >= required[i]) {
            ++i;
        }
        ++j;
    }

    cout << (n - i) << endl;
    return 0;
}
