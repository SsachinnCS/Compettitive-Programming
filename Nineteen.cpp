#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    
    string s;
    cin >> s;
    
    int n = 0, i = 0, e = 0, t = 0;


    for (char c : s) {
        if (c == 'n') n++;
        else if (c == 'i') i++;
        else if (c == 'e') e++;
        else if (c == 't') t++;
    }


    n = (n - 1) / 2;
    e = e / 3;


    int ans = min({n, i, e, t});
    cout << ans << "\n";

    return 0;
}


// #include<bits/stdc++.h>
// #define FOR(a, b, c) for(auto i = a; i < b; i += c)

// using namespace std;

// int main(){
//     ios::sync_with_stdio(false); cin.tie(0);
    
//    string s;
//    cin>>s;
//    int count(0),n(0),i(0),e(0),t(0),ans(0);

//    for(int a=0;a<s.size();a++){
//     if(s[a]== 'n')n++;
//     else if(s[a]== 'i')i++;
//     else if(s[a]== 'e' )e++;
//     else if(s[a]== 't' )t++;
//    }

//     if(n>=3 && i>0 && e>=3 && t>0 ){ 
//         ans = min(n,min(i,min(e,t)));
//          cout<<ans;
//          return 0;
//     }
//    cout<<0;

//     return 0;
// }