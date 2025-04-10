#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    // Case 1: If `t` is larger than `s`, "need tree" is the only possible answer.
    if (s.size() < t.size()) {
        cout << "need tree";
        return 0;
    }

    // Check if `t` is a subsequence of `s` (automaton check)
    int j = 0; // Pointer for `t`
    for (int i = 0; i < s.size() && j < t.size(); i++) {
        if (s[i] == t[j]) {
            j++;
        }
    }
    if (j == t.size()) {
        cout << "automaton";
        return 0;
    }

    // Count frequencies of characters in `s` and `t`
    vector<int> freqS(26, 0), freqT(26, 0);
    for (char c : s) freqS[c - 'a']++;
    for (char c : t) freqT[c - 'a']++;

    // Check if `t` can be formed by rearranging `s` (array check)
    bool isArray = true;
    for (int i = 0; i < 26; i++) {
        if (freqT[i] > freqS[i]) {
            isArray = false;
            break;
        }
    }

    if (isArray) {
        // If sizes match, it's "array"; otherwise, it's "both."
        if (s.size() == t.size()) {
            cout << "array";
        } else {
            cout << "both";
        }
    } else {
        cout << "need tree";
    }

    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string s,t;
//     int count = 0;
//     cin>>s>>t;

//     string s1(s),t1(t),a(s),b(t);
//     bool check = true;

//     size_t ans = s.find(t);
//     sort(s1.begin(),s1.end());
//     sort(t1.begin(),t1.end());

//     if(s.size()<t.size()){
//         cout<<"need tree";
//         return 0;
//     }

//     if(s.size()>t.size()){
//       for(int i= 0;i<s.size();i++){
//         for(int j=i;j<t.size();j++){
//             if(s[i]==t[j]){
//                 b.erase(remove(b.begin(), b.end(), s[i]), b.end());
//             count++;}
//         }
//         if(count==t.size()){
//             cout<<"automaton";
//             return 0;
//         }
//     }}

//     if(s1.size()==t1.size()){
//         for(int i=0;i<s1.size();i++){
//             if(s1[i]==t1[i])continue;
//             else {
//                 check = false;
//                 break;
//             }
//         }
//         if(check){
//             cout<<"array";
//             return 0;
//         }
//         else{
//             cout<<"need tree";
//             return 0;
//         }
//     }

    
//     if(s.size()>t.size()){
//         count = 0;
//         for(int j=0;j<s.size();j++){
//             for(int i=0;i<t.size();i++){
//                 if(s[j]==t[i])count++;
//         }
//         }
//         if(count == t.size()){
//             cout<<"both";
//             return 0;
//         }
//     }


//     // if (ans != string::npos) {
//     //     cout << "Found '" << word << "' at position " << pos << endl;
//     // } else {
//     //     cout << "Word not found" << endl;
//     // }

//     if (s.find(t) != string::npos) {
//         cout<<"automaton";
   
//     }
// }



#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool array(string a, string b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

bool automaton(string a, string b)
{
    int n = 0;
    for (int i = 0; i < a.length() and n < b.length(); i++) n += a[i] == b[n];
    return n == b.length();
}

bool both(string a, string b)
{
    vector<int> freqA(26, 0), freqB(26, 0);

    // Count frequencies of characters in both strings
    for (char c : a) freqA[c - 'a']++;
    for (char c : b) freqB[c - 'a']++;

    // Check if `b` can be formed using characters in `a`
    for (int i = 0; i < 26; i++)
        if (freqB[i] > freqA[i]) return false;

    return true;
}

// int main()
// {
//     string a, b;
//     cin >> a >> b;

//     if (array(a, b)) cout << "array" << endl;
//     else if (automaton(a, b)) cout << "automaton" << endl;
//     else if (both(a, b)) cout << "both" << endl;
//     else cout << "need tree" << endl;

//     return 0;
// }
