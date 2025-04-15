#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);

int main() {
    optimize();

    int cnt_4 = 0, cnt_7 = 0;
    string s;
    cin >> s;

    for (char ch : s) {
        if (ch == '4') cnt_4++;
        else if (ch == '7') cnt_7++;
    }

    if (cnt_4 == 0 && cnt_7 == 0) cout << -1;
    else if (cnt_4 >= cnt_7) cout << "4";
    else cout << "7";

    return 0;
}
