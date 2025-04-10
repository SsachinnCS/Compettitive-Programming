#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> first_moves, second_moves;
    long long first_score = 0, second_score = 0;
    int last_move = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        last_move = x;
        if (x > 0) {
            first_score += x;
            first_moves.push_back(x);
        } else {
            x = -x;
            second_score += x;
            second_moves.push_back(x);
        }
    }

    if (first_score > second_score) {
        cout << "first" << endl;
    } else if (first_score < second_score) {
        cout << "second" << endl;
    } else {
        if (first_moves > second_moves) {
            cout << "first" << endl;
        } else if (first_moves < second_moves) {
            cout << "second" << endl;
        } else {
            if (last_move > 0) {
                cout << "first" << endl;
            } else {
                cout << "second" << endl;
            }
        }
    }

    return 0;
}
