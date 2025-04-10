#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    string s;
    cin >> s;
    int n = s.size();

    string ans=" ";

   

    for (int i = 0; i < n; i++) {
        char ch = tolower(s[i]);
        if(ch == 'a' || ch == 'o' || ch =='y'|| ch == 'e' || ch == 'u' || ch == 'i'){
            continue;
        }
        else{
            ans  +='.';
            ans +=ch;
            
        }

    }


    
    cout << ans << "\n";

    return 0;
}
