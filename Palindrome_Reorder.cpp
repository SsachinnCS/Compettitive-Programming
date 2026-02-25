#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int cnt = 0;
    map<char,int>mp;
    for(auto a:s)mp[a]++;

    string left = "",mid="";
    for(auto a:mp){
        if(a.second%2==0){
            for(int i=0;i<a.second / 2 ;i++){
                left+=a.first;
            }
        }
        else {
            cnt++;
            for(int i=0;i<a.second;i++){
                mid+=a.first;
            }
        }
    }

    if(cnt>1){cout<<"NO SOLUTION";return 0;}
    cout<<left;
    cout<<mid;
    reverse(left.begin(),left.end());
    cout<<left;
    return 0;
}