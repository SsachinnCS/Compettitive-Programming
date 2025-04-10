#include <iostream>
#include <cctype> // For isalpha function
using namespace std;

int main() {
    string s;
    getline(cin, s); // Read the full input line

    // Find the last alphabetic character in the string
    for (int i = s.size() - 1; i >= 0; --i) {
        if (isalpha(s[i])) {
            // Check if the character is a vowel
            char ch = tolower(s[i]); // Convert to lowercase for uniformity
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            return 0; // Exit once the last alphabetic character is processed
        }
    }

    // If no alphabetic character is found (edge case, though unlikely)
    cout << "NO" << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     string s;
//     getline(cin, s);

//     // Convert the string to uppercase for uniformity
//     transform(s.begin(), s.end(), s.begin(), ::toupper);

//     int n = s.size();

//     // Start from the end of the string and skip trailing spaces
//     int i = n - 1;
//     while (i >= 0 && s[i] == ' ') {
//         --i;
//     }

//     // Find the last non-space character of the last word
//     while (i >= 0 && s[i] != ' ') {
//         // Check if the character is a vowel
//         if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') {
//             cout << "YES";
//             return 0;
//         }
//         --i;
//     }

//     // If no vowels are found in the last word
//     cout << "NO";
//     return 0;
// }


// #include <bits/stdc++.h>


// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     string s;
//     getline(cin,s);
//     transform(s.begin(), s.end(), s.begin(), ::toupper);

//     int n = s.size();
//     int i=n-1;

//     if(s[n-2]!=' '){
//         if(s[n-2]=='A' || s[n-2]=='E' ||  s[n-2]=='I' || s[n-2]=='O'|| s[n-2]=='U'|| s[n-2]=='Y')cout<<"YES";
//         else cout<<"NO";
//     }
    
//      else if(s[n-2]==' '){
//         while(s[i]!=' '){
//             --i;
//         }
//         if(s[n-3]=='A' || s[n-3]=='E' ||  s[n-3]=='I' || s[n-3]=='O'|| s[n-3]=='U'|| s[n-3]=='Y')cout<<"YES";
//         else cout<<"NO";
//     }
//     else {
//         if(s[n-3]=='A' || s[n-3]=='E' ||  s[n-3]=='I' || s[n-3]=='O'|| s[n-3]=='U'|| s[n-3]=='Y')cout<<"YES";
//         else cout<<"NO";
//     }

//    return 0;
// }