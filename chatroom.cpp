#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans ="hello";
    int j =0;

    for(int i = 0 ; i<s.size() ; i++){
        if(j==5)break;
        if(s[i]==ans[j])j++;
    }

    if(j==5)cout<<"YES\n";
    else cout<<"NO\n";
    
    return 0;
}

