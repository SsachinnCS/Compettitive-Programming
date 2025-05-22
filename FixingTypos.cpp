#include<bits/stdc++.h>
using namespace std;


#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long
const int MOD = 1e9 + 7;

int main(){
    string s;
    cin>>s;

    map<char,int>choices;
    set<string>stringSet;
    stringSet.insert(s);
    int maxCn = 0;
    char idx ='\0';
    for(auto a : s){
        choices[a]++;
        if(maxCn<choices[a]){
            maxCn=choices[a];
            idx = a;
        }
        //cout<<choices[a]<<endl;

    }
    int i=0;
    while(s[i]!=idx){
        cout<<s[i];
        i++;
    }
    if(choices[idx]<2)cout<<idx;
    else cout<<idx<<idx;
    i++;
    while(i<s.size()){
        if(s[i]==idx){
            i++;
            continue;
        }
        else {
            
            cout<<s[i];
            i++;
        }
    }
    

    return 0;
}