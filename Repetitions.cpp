#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const int N = 1e5 + 10;
const int INF = 1e9 + 10;

int main(){

    string s;
    cin>>s;

   ll cnt = 1;
    ll mxcnt = 1;
   for(int i=1;i<s.size();++i){
    if(s[i]==s[i-1]){
        cnt++;
    mxcnt = max(cnt,mxcnt);
    }
    else cnt=1;
   }


    cout<<mxcnt<<endl;
}