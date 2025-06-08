#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;

int main(){

    ll n;
    cin>>n;

    ll sum = n * (n+1) /2;
    //cout<<sum<<endl;
    ll target = sum/2;

    if(sum % 2 != 0){
        cout<<"NO"<<endl;
    
    }

    
    else {
        vector<ll>set1,set2;
        for(ll i = n ;i>=1 ; i--){
            if(i<=target){
                set1.push_back(i);
                target-=i;
            }
            else set2.push_back(i);
        }

        cout<<"YES"<<endl<<set1.size()<<endl;
        for(auto a : set1)cout<<a<<" ";
        cout<<endl;
        cout<<set2.size()<<endl;
        for(auto c : set2)cout<<c<<" ";
    }
    
    return 0;
}


