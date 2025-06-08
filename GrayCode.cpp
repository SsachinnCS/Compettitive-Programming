#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;

string toBinary(int gray,int n){
    string result = "";
    for(int i=n-1;i>=0;i--){
        if((gray >> i) & 1)result+='1';
        else result+='0';
    }
    return result;
}

int main(){
    optimize();

    ll n;
    cin>>n;

    ll total = pow(2,n);

    for(int i=0;i<total;i++){
        int gray = i ^ (i>>1);
        cout<<toBinary(gray,n)<<endl;
    }
    return 0;
    
}