#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    vector<int>cnt(26,0);
    for(auto fr : s)cnt[fr - 'a']++;

    int oddCnt = 0;
    for(auto oc : cnt){
        if(oc % 2 == 1)oddCnt++;
    }

    if(oddCnt == 0 || oddCnt%2 == 1)cout<<"First";
    else cout<<"Second";
    return 0;
}