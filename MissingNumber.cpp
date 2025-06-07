#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const int N = 1e5 + 10;
const int INF = 1e9 + 10;


int main(){

    ll n;
    cin>>n;

    ll sum1(0),sum2(0);

    for(int i=0;i<n-1;i++){
        ll a;
        cin>>a;
        sum1+=a;
    }

    sum2= (n*(n+1))/2;
    cout<<sum2-sum1<<endl;
    
}