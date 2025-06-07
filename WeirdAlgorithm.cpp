#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const int N = 1e5 + 10;
const int INF = 1e9 + 10;


int main(){

    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n>1){
        if(n%2==0){
        n=n/2;
        cout<<n<<" ";
    }
        else {
        n=(n*3 )+ 1;
        cout<<n<<" ";
    }
    }
}