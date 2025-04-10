// #include <bits/stdc++.h>
// #include<unordered_set>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int n;
//     cin>>n;

//     string s;
//     cin>>s;
    
//     for (int i = 0; i < n/2; i++) {
      
//         if (s[i] == 'L' && s[i+(n/2)] == 'L') {
//             cout << i + 1 << " " << i+(n/2)+1 << "\n";  // Write to output file
//         } else if (s[i] == 'R' && s[i+(n/2)] == 'R') {
//             cout << i + 1 << " " << i+(n/2)+1 << "\n";  // Write to output file
//         } else if (s[i] == 'R' && s[i+(n/2)] == 'L') {
//             cout << i+(n/2) + 1 << " " << i+ 1 << "\n";  // Write to output file
//         } else { // Handles case where s[i] == 'L' and s[i+1] == 'R'
//             cout << i + 1 << " " << i+(n/2) + 1 << "\n";  // Write to output file
//         }
//     }

//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Redirect standard input/output to files
   freopen("input.txt", "r", stdin);   // Read from "input.txt"
    freopen("output.txt", "w", stdout); // Write to "output.txt"


    int n;
    cin >> n;

    string s;
    cin >> s;
    
     for (int i = 0; i < n/2; i++) {
      
        if (s[i] == 'L' && s[i+(n/2)] == 'L') {
            cout << i + 1 << " " << i+(n/2)+1 << "\n";  // Write to output file
        } else if (s[i] == 'R' && s[i+(n/2)] == 'R') {
            cout << i + 1 << " " << i+(n/2)+1 << "\n";  // Write to output file
        } else if (s[i] == 'R' && s[i+(n/2)] == 'L') {
            cout << i+(n/2) + 1 << " " << i+ 1 << "\n";  // Write to output file
        } else { // Handles case where s[i] == 'L' and s[i+1] == 'R'
            cout << i + 1 << " " << i+(n/2) + 1 << "\n";  // Write to output file
        }
    }

   

    return 0;
}

