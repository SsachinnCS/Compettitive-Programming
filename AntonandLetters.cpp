#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    
    string s;
    getline(cin,s);
    set<char>ans;

    for(int i =0 ; i<s.size() ; i++){
        if(islower(s[i])){
            ans.insert(s[i]);
        }
    }

    cout<<ans.size();

    return 0;
}