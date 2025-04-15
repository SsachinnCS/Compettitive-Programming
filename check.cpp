#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
    int l = 0, r = str.length() - 1;
    while (l < r) {
        if (str[l] != str[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string s = "forgeeksskeegfor";
    vector<string> ans;

    int n = s.length();
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            string sub = s.substr(i, j - i + 1);
            if (isPalindrome(sub)) {
                ans.push_back(sub);
            }
        }
    }

    for (auto it : ans) cout << it << endl;
    return 0;
}
