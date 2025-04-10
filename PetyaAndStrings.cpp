#include <bits/stdc++.h>
using namespace std;

int main() {
    
    //1st < 2nd = -1;
    //2nd < 1st = 1;
    //1st == 2nd =0
    
    string o,t;
    cin >> o >> t;
    int n = o.size();
    bool check = true;
    string f , s;

    for(int i = 0 ; i<n;i++){
        f+=tolower(o[i]);
        s+=tolower(t[i]);

        if(f[i]==s[i] && check==true){
            continue;
        }
        else {
        check = false;
        break;
        }
    }

    // int a = 0;
    // int b = 0;
    if(check == false){

        char f = o[n-1];
        char sn = t[n-1];

        int resulta = f - '0';
        int resultb = sn - '0';

        if(resulta > resultb)cout<<"1";
        else cout <<"-1";

        // for(int i = 0 ; i<n;i++){
        // // if(isupper(o[i]))a++;
        // // if(isupper(t[i]))b++;
        // }
        // if(o[n-1]-'0' > t[n-1]-'0')cout<<"1";
        // else cout<<"-1";
    }

    if(check)cout<<"0";
    // else{

    //     // if(a>b)cout<<"1";
    //     // else cout<<"-1";
    // }

    

    return 0;
}
