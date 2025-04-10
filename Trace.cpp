#include <bits/stdc++.h>
using namespace std;

int main() {
    const double PI = 3.141592653589793;
    int n;
    cin >> n;

    vector<double> arr(n); // Use double to store radius
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<double>()); // sort in descending for alternating sum

    double area = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) area += PI * arr[i] * arr[i];
        else area -= PI * arr[i] * arr[i];
    }

    cout << fixed << setprecision(10) << area << endl;
    return 0;
}
