#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);

int main() {
    int t;  // Number of test cases
    cin >> t;
    cin.ignore();  // To ignore the newline character after the integer input
    
    while (t--) {
        string line;
        getline(cin, line);  // Read the entire line for each test case
        
        stringstream ss(line);  // Create a stringstream object
        
        string word1, word2, word3;
        ss >> word1 >> word2 >> word3;  // Extract the three words
        
        // Output the first character of each word concatenated
        cout << word1[0] << word2[0] << word3[0] << endl;
    }
    
    return 0;
}