#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;

int main(){
    optimize();

    string s;
    cin>>s;

    unordered_map<char,int>mp;
    for(auto c : s){
        mp[c]++;
    }

    //for(auto [ch,freq] : mp)cout<<ch<<" "<<freq<<" ";
    string half="",middle="";
    for(auto [ch,freq] : mp){
        if(freq % 2 != 0){
           if(middle != ""){
            cout<<"NO SOLUTION"<<endl;
            return 0;
           }
           middle=ch;
        }
        half+=string(freq/2,ch);
    }
    string half2 = half;
   reverse(half2.begin(),half2.end());
    cout<<half+middle+half2<<endl;
    return 0;
    
}