#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string str[n];
    
    for(int i=0;i<n;i++){
        cin>>str[i];
    }


    string s1 = str[0];
    string s2;
    int c1=0,c2=0;

    for(int i=0;i<n;i++){
        if(str[i]==s1)c1++;
        else {
            s2=str[i];
            c2++;
        }
    }

    if(c1>c2)cout<<s1;
    else cout<<s2;


    return 0;
}
